// ======================================================================
// \title  ActiveTelemetryTester.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for ActiveTelemetry component test harness implementation class
// ======================================================================

#include "test/ActiveTelemetryTester.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

ActiveTelemetryTester ::
  ActiveTelemetryTester() :
    ActiveTelemetryGTestBase("ActiveTelemetryTester", ActiveTelemetryTester::MAX_HISTORY_SIZE),
    component("ActiveTelemetry")
{
  this->initComponents();
  this->connectPorts();
}

ActiveTelemetryTester ::
  ~ActiveTelemetryTester()
{

}

// ----------------------------------------------------------------------
// Handlers for typed from ports
// ----------------------------------------------------------------------

void ActiveTelemetryTester ::
  from_typedOut_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedPortStrings::StringSize80& str1,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO
}

F32 ActiveTelemetryTester ::
  from_typedReturnOut_handler(
      NATIVE_INT_TYPE portNum,
      U32 u32,
      F32 f32,
      bool b,
      const TypedReturnPortStrings::StringSize80& str2,
      const E& e,
      const A& a,
      const S& s
  )
{
  // TODO return
}

// ----------------------------------------------------------------------
// Helper functions
// ----------------------------------------------------------------------

void ActiveTelemetryTester ::
  connectPorts()
{
  // Connect typed input ports

  this->connect_to_noArgsAsync(
    0,
    this->component.get_noArgsAsync_InputPort(0)
  );

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

  this->connect_to_typedAsync(
    0,
    this->component.get_typedAsync_InputPort(0)
  );

  this->connect_to_typedAsyncAssert(
    0,
    this->component.get_typedAsyncAssert_InputPort(0)
  );

  this->connect_to_typedAsyncBlockPriority(
    0,
    this->component.get_typedAsyncBlockPriority_InputPort(0)
  );

  this->connect_to_typedAsyncDropPriority(
    0,
    this->component.get_typedAsyncDropPriority_InputPort(0)
  );

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

void ActiveTelemetryTester ::
  initComponents()
{
  this->init();
  this->component.init(ActiveTelemetryTester::TEST_INSTANCE_QUEUE_DEPTH, ActiveTelemetryTester::TEST_INSTANCE_ID);
}
