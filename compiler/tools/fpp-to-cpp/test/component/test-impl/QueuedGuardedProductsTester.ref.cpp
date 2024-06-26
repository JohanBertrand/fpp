// ======================================================================
// \title  QueuedGuardedProductsTester.cpp
// \author [user name]
// \brief  cpp file for QueuedGuardedProducts component test harness implementation class
// ======================================================================

#include "QueuedGuardedProductsTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

QueuedGuardedProductsTester ::
  QueuedGuardedProductsTester() :
    QueuedGuardedProductsGTestBase("QueuedGuardedProductsTester", QueuedGuardedProductsTester::MAX_HISTORY_SIZE),
    component("QueuedGuardedProducts")
{
  this->initComponents();
  this->connectPorts();
}

QueuedGuardedProductsTester ::
  ~QueuedGuardedProductsTester()
{

}

// ----------------------------------------------------------------------
// Tests
// ----------------------------------------------------------------------

void QueuedGuardedProductsTester ::
  toDo()
{
  // TODO
}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void QueuedGuardedProductsTester ::
  from_noArgsOut_handler(FwIndexType portNum)
{
  // TODO
}

U32 QueuedGuardedProductsTester ::
  from_noArgsReturnOut_handler(FwIndexType portNum)
{
  // TODO return
}

void QueuedGuardedProductsTester ::
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

F32 QueuedGuardedProductsTester ::
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
