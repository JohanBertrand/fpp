// ======================================================================
// \title  ActiveEventsTester.cpp
// \author [user name]
// \brief  cpp file for ActiveEvents component test harness implementation class
// ======================================================================

#include "ActiveEventsTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

ActiveEventsTester ::
  ActiveEventsTester() :
    ActiveEventsGTestBase("ActiveEventsTester", ActiveEventsTester::MAX_HISTORY_SIZE),
    component("ActiveEvents")
{
  this->initComponents();
  this->connectPorts();
}

ActiveEventsTester ::
  ~ActiveEventsTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void ActiveEventsTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void ActiveEventsTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  // TODO
}

U32 ActiveEventsTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  // TODO return
}

void ActiveEventsTester ::
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

F32 ActiveEventsTester ::
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
