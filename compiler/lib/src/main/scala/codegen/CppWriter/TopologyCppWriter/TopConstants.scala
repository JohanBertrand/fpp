package fpp.compiler.codegen

import fpp.compiler.analysis._
import fpp.compiler.ast._
import fpp.compiler.util._

/** Writes out C++ for topology constants */
case class TopConstants(
  s: CppWriterState,
  aNode: Ast.Annotated[AstNode[Ast.DefTopology]]
) extends TopologyCppWriterUtils(s, aNode) {

  def getLines: List[Line] = 
    addBannerComment(
      "Constants",
      flattenWithBlankPrefix(
        List(
          getComponentConfigLines,
          getBaseIdLines,
          getInstanceIdLines,
          getPriorityLines,
          getQueueSizeLines,
          getStackSizeLines,
          getTaskIdLines
        )
      )
    )

  private def getComponentConfigLines: List[Line] = {
    val getCode = getCodeForPhase (CppWriter.Phases.configConstants) _
    val pairs = instances.map(ci => (ci, getCode(ci))).
      filter(_._2.isDefined).map { 
        case (ci, codeOpt) => (ci, codeOpt.get)
      }
    wrapInNamespace(
      "ConfigConstants",
      pairs.flatMap { 
        case (ci, code) => wrapInNamespace(
          getShortName(ci.qualifiedName).toString,
          lines(code)
        )
      }
    )
  }

  private def generateEnum(
    namespace: String,
    f: ComponentInstance => Option[String]
  ): List[Line] = {
    wrapInNamespace(
      namespace,
      wrapInEnum(
        instances.map(f).filter(_.isDefined).
        map(_.get).map(s => line(s"$s,"))
      )
    )
  }

  private def getBaseIdLines: List[Line] =
    generateEnum(
      "BaseIds",
      ci => {
        val name = getShortName(ci.qualifiedName)
        val value = CppWriter.writeId(ci.baseId)
        Some(s"$name = $value")
      }
    )

  private def getInstanceIdLines: List[Line] =
    generateEnum(
      "InstanceIds",
      ci => {
        val name = getShortName(ci.qualifiedName)
        Some(s"$name")
      }
    )

  private def getPriorityLines: List[Line] = {
    generateEnum(
      "Priorities",
      ci => ci.priority.map(
        priority => {
          val name = getShortName(ci.qualifiedName)
          val value = priority.toString
          s"$name = $priority"
        }
      )
    )
  }

  private def getQueueSizeLines: List[Line] = {
    // TODO
    Nil
  }

  private def getStackSizeLines: List[Line] = {
    // TODO
    Nil
  }

  private def getTaskIdLines: List[Line] = {
    // TODO
    Nil
  }

}