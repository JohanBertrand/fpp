package fpp.compiler.codegen

import fpp.compiler.analysis._
import fpp.compiler.util._

/** Write an FPP type as XML */
object TypeXmlWriter {

  private object NameVisitor extends TypeVisitor {

    type In = XmlWriterState

    type Out = String

    override def absType(s: In, t: Type.AbsType) =
      s.writeSymbol(Symbol.AbsType(t.node))

    override def array(s: In, t: Type.Array) =
      s.writeSymbol(Symbol.Array(t.node))

    override def boolean(s: In) = "bool"

    override def default(s: In, t: Type) = throw new InternalError("visitor not defined")

    override def enumeration(s: In, t: Type.Enum) =
      s.writeSymbol(Symbol.Enum(t.node))

    override def float(s: In, t: Type.Float) = t.toString

    override def primitiveInt(s: In, t: Type.PrimitiveInt) = t.toString

    override def string(s: In, t: Type.String) = "string"

    override def struct(s: In, t: Type.Struct) =
      s.writeSymbol(Symbol.Struct(t.node))

  }

  /** Get the name of a type */
  def getName(s: XmlWriterState, t: Type): String = NameVisitor.ty(s, t)

  /** Get the size of a type */
  def getSize(s: XmlWriterState, t: Type): Option[String] = t match {
    case Type.String(Some(node)) => Some(s.a.valueMap(node.id).toString)
    case Type.String(None) => Some(s.defaultStringSize.toString)
    case _ => None
  }

  /** Get the key-value pairs for a type */
  def getPairs(s: XmlWriterState, t: Type, nameTag: String = "type"): List[(String,String)] = {
    val name = (nameTag, getName(s, t))
    getSize(s, t) match {
      case Some(size) => List(name, ("size", size))
      case None => List(name)
    }
  }

}
