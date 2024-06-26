// ======================================================================
// \title  PassiveSyncProductsTester.cpp
// \author [user name]
// \brief  cpp file for PassiveSyncProducts component test harness implementation class
// ======================================================================

#include "PassiveSyncProductsTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

PassiveSyncProductsTester ::
  PassiveSyncProductsTester() :
    PassiveSyncProductsGTestBase("PassiveSyncProductsTester", PassiveSyncProductsTester::MAX_HISTORY_SIZE),
    component("PassiveSyncProducts")
{
  this->initComponents();
  this->connectPorts();
}

PassiveSyncProductsTester ::
  ~PassiveSyncProductsTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void PassiveSyncProductsTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void PassiveSyncProductsTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  // TODO
}

U32 PassiveSyncProductsTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  // TODO return
}

void PassiveSyncProductsTester ::
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

F32 PassiveSyncProductsTester ::
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
