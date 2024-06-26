// ======================================================================
// \title  PassiveEventsTester.cpp
// \author [user name]
// \brief  cpp file for PassiveEvents component test harness implementation class
// ======================================================================

#include "PassiveEventsTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

PassiveEventsTester ::
  PassiveEventsTester() :
    PassiveEventsGTestBase("PassiveEventsTester", PassiveEventsTester::MAX_HISTORY_SIZE),
    component("PassiveEvents")
{
  this->initComponents();
  this->connectPorts();
}

PassiveEventsTester ::
  ~PassiveEventsTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void PassiveEventsTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void PassiveEventsTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  // TODO
}

U32 PassiveEventsTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  // TODO return
}

void PassiveEventsTester ::
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

F32 PassiveEventsTester ::
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
