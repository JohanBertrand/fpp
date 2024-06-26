// ======================================================================
// \title  QueuedTestTester.cpp
// \author [user name]
// \brief  cpp file for QueuedTest component test harness implementation class
// ======================================================================

#include "QueuedTestTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

QueuedTestTester ::
  QueuedTestTester() :
    QueuedTestGTestBase("QueuedTestTester", QueuedTestTester::MAX_HISTORY_SIZE),
    component("QueuedTest")
{
  this->initComponents();
  this->connectPorts();
}

QueuedTestTester ::
  ~QueuedTestTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void QueuedTestTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void QueuedTestTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  // TODO
}

U32 QueuedTestTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  // TODO return
}

void QueuedTestTester ::
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

F32 QueuedTestTester ::
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
