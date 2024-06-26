// ======================================================================
// \title  ActiveAsyncProductsTester.cpp
// \author [user name]
// \brief  cpp file for ActiveAsyncProducts component test harness implementation class
// ======================================================================

#include "ActiveAsyncProductsTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

ActiveAsyncProductsTester ::
  ActiveAsyncProductsTester() :
    ActiveAsyncProductsGTestBase("ActiveAsyncProductsTester", ActiveAsyncProductsTester::MAX_HISTORY_SIZE),
    component("ActiveAsyncProducts")
{
  this->initComponents();
  this->connectPorts();
}

ActiveAsyncProductsTester ::
  ~ActiveAsyncProductsTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void ActiveAsyncProductsTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void ActiveAsyncProductsTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  // TODO
}

U32 ActiveAsyncProductsTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  // TODO return
}

void ActiveAsyncProductsTester ::
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

F32 ActiveAsyncProductsTester ::
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
