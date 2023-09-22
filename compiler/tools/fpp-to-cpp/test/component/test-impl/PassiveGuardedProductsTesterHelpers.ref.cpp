// ======================================================================
// \title  PassiveGuardedProductsTesterHelpers.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for PassiveGuardedProducts component test harness implementation class
// ======================================================================

#include "PassiveGuardedProductsTester.hpp"

// ----------------------------------------------------------------------
// Helper functions
// ----------------------------------------------------------------------

void PassiveGuardedProductsTester ::
  connectPorts()
{
  // Connect special input ports

  this->connect_to_productRecvIn(
    0,
    this->component.get_productRecvIn_InputPort(0)
  );

  // Connect special output ports

  this->component.set_productRequestOut_OutputPort(
    0,
    this->get_from_productRequestOut(0)
  );

  this->component.set_productSendOut_OutputPort(
    0,
    this->get_from_productSendOut(0)
  );

  this->component.set_timeGetOut_OutputPort(
    0,
    this->get_from_timeGetOut(0)
  );

  // Connect typed input ports

  this->connect_to_noArgsGuarded(
    0,
    this->component.get_noArgsGuarded_InputPort(0)
  );

  this->connect_to_noArgsReturnGuarded(
    0,
    this->component.get_noArgsReturnGuarded_InputPort(0)
  );

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_noArgsReturnSync(
      i,
      this->component.get_noArgsReturnSync_InputPort(i)
    );
  }

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_noArgsSync(
      i,
      this->component.get_noArgsSync_InputPort(i)
    );
  }

  this->connect_to_typedGuarded(
    0,
    this->component.get_typedGuarded_InputPort(0)
  );

  this->connect_to_typedReturnGuarded(
    0,
    this->component.get_typedReturnGuarded_InputPort(0)
  );

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_typedReturnSync(
      i,
      this->component.get_typedReturnSync_InputPort(i)
    );
  }

  for (NATIVE_UINT_TYPE i = 0; i < 3; i++) {
    this->connect_to_typedSync(
      i,
      this->component.get_typedSync_InputPort(i)
    );
  }

  // Connect typed output ports

  this->component.set_typedOut_OutputPort(
    0,
    this->get_from_typedOut(0)
  );

  this->component.set_typedReturnOut_OutputPort(
    0,
    this->get_from_typedReturnOut(0)
  );
}

void PassiveGuardedProductsTester ::
  initComponents()
{
  this->init();
  this->component.init(PassiveGuardedProductsTester::TEST_INSTANCE_ID);
}
