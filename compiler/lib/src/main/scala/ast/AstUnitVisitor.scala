package fpp.compiler.ast

/** Visit an AST with unit input */
trait AstUnitVisitor[B] extends AstVisitor[Unit, B] {

  def defAbsType(dat: Ast.DefAbsType): B

  def defArray(da: Ast.DefArray): B

  def defComponent(dc: Ast.DefComponent): B

  def defComponentInstance(dci: Ast.DefComponentInstance): B

  def defConstant(dc: Ast.DefConstant): B

  def defEnum(de: Ast.DefEnum): B

  def defEnumConstant(dec: Ast.DefEnumConstant): B

  def defModule(dm: Ast.DefModule): B

  def defPort(dp: Ast.DefPort): B

  def defStruct(ds: Ast.DefStruct): B

  def defTopology(dt: Ast.DefTopology): B

  def exprArray(elts: List[AstNode[Ast.Expr]]): B

  def exprBinop(e1: Ast.Expr, op: Ast.Binop, e2: Ast.Expr): B

  def exprDot(e: Ast.Expr, id: Ast.Ident): B

  def specCommand(sc: Ast.SpecCommand): B

  def specEvent(se: Ast.SpecEvent): B

  def specInclude(si: Ast.SpecInclude): B

  def specInit(si: Ast.SpecInit): B

  def specInternalPort(sip: Ast.SpecInternalPort): B

  def specLoc(sl: Ast.SpecLoc): B

  def specParam(sp: Ast.SpecParam): B
  
  def specPortInstance(spi: Ast.SpecPortInstance): B

  def specTlmChannel(stc: Ast.SpecTlmChannel): B
  
  def transUnit(tu: Ast.TransUnit): B

  final def defAbsType(a: Unit, dat: Ast.DefAbsType): B = defAbsType((), dat)

  final def defArray(a: Unit, da: Ast.DefArray): B = defArray((), da)

  final def defComponent(a: Unit, dc: Ast.DefComponent): B = defComponent((), dc)

  final def defComponentInstance(a: Unit, dci: Ast.DefComponentInstance): B = defComponentInstance((), dci)

  final def defConstant(a: Unit, dc: Ast.DefConstant): B = defConstant((), dc)

  final def defEnum(a: Unit, de: Ast.DefEnum): B = defEnum((), de)

  final def defEnumConstant(a: Unit, dec: Ast.DefEnumConstant): B = defEnumConstant((), dec)

  final def defModule(a: Unit, dm: Ast.DefModule): B = defModule((), dm)

  final def defPort(a: Unit, dp: Ast.DefPort): B = defPort((), dp)

  final def defStruct(a: Unit, ds: Ast.DefStruct): B = defStruct((), ds)

  final def defTopology(a: Unit, dt: Ast.DefTopology): B = defTopology((), dt)

  final def exprArray(a: Unit, elts: List[AstNode[Ast.Expr]]): B = exprArray((), elts)

  final def exprBinop(a: Unit, e1: Ast.Expr, op: Ast.Binop, e2: Ast.Expr): B = exprBinop((), e1, op, e2)

  final def exprDot(a: Unit, e: Ast.Expr, id: Ast.Ident): B = exprDot((), e, id)

  final def matchComponentMemberNode(cmn: Ast.ComponentMember.Node): B =
    matchComponentMemberNode((), cmn)

  final def matchModuleMemberNode(mmn: Ast.ModuleMember.Node): B =
    matchModuleMemberNode((), mmn)

  final def matchTuMemberNode(tumn: Ast.TUMember.Node): B =
    matchTuMemberNode((), tumn)

  final def specCommand(a: Unit, sc: Ast.SpecCommand): B = specCommand((), sc)

  final def specEvent(a: Unit, se: Ast.SpecEvent): B = specEvent((), se)

  final def specInclude(a: Unit, si: Ast.SpecInclude): B = specInclude((), si)

  final def specInit(a: Unit, si: Ast.SpecInit): B = specInit((), si)

  final def specInternalPort(a: Unit, sip: Ast.SpecInternalPort): B = specInternalPort((), sip)

  final def specLoc(a: Unit, sl: Ast.SpecLoc): B = specLoc((), sl)

  final def specParam(a: Unit, sp: Ast.SpecParam): B = specParam((), sp)

  final def specPortInstance(a: Unit, spi: Ast.SpecPortInstance): B = specPortInstance((), spi)

  final def specTlmChannel(a: Unit, stc: Ast.SpecTlmChannel): B = specTlmChannel((), stc)

  final def transUnit(a: Unit, tu: Ast.TransUnit): B = transUnit((), tu)

}