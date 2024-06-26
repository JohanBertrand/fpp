// ======================================================================
// \title  ActiveParamsTester.cpp
// \author [user name]
// \brief  cpp file for ActiveParams component test harness implementation class
// ======================================================================

#include "ActiveParamsTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

ActiveParamsTester ::
  ActiveParamsTester() :
    ActiveParamsGTestBase("ActiveParamsTester", ActiveParamsTester::MAX_HISTORY_SIZE),
    component("ActiveParams")
{
  this->initComponents();
  this->connectPorts();
}

ActiveParamsTester ::
  ~ActiveParamsTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void ActiveParamsTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void ActiveParamsTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  // TODO
}

U32 ActiveParamsTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  // TODO return
}

void ActiveParamsTester ::
  from_typedOut_handler(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO
}

F32 ActiveParamsTester ::
  from_typedReturnOut_handler(
      FwIndexType portNum,
      U32 u32,
      F32 f32,
      bool b,
      const Ports::TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO return
}
