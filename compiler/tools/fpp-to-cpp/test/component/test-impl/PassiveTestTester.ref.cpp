// ======================================================================
// \title  PassiveTestTester.cpp
// \author [user name]
// \brief  cpp file for PassiveTest component test harness implementation class
// ======================================================================

#include "PassiveTestTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

PassiveTestTester ::
  PassiveTestTester() :
    PassiveTestGTestBase("PassiveTestTester", PassiveTestTester::MAX_HISTORY_SIZE),
    component("PassiveTest")
{
  this->initComponents();
  this->connectPorts();
}

PassiveTestTester ::
  ~PassiveTestTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void PassiveTestTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void PassiveTestTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  // TODO
}

U32 PassiveTestTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  // TODO return
}

void PassiveTestTester ::
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

F32 PassiveTestTester ::
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
