// ======================================================================
// \title  EmptyGTestBase.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Empty component Google Test harness base class
// ======================================================================

#ifndef EmptyGTestBase_HPP
#define EmptyGTestBase_HPP

#include "gtest/gtest.h"
#include "test/EmptyTesterBase.hpp"

// ----------------------------------------------------------------------
// Macros for typed user from port history assertions
// ----------------------------------------------------------------------

#define ASSERT_FROM_PORT_HISTORY_SIZE(size) \
  this->assertFromPortHistory_size(__FILE__, __LINE__, size)

// ----------------------------------------------------------------------
// Macros for command history assertions
// ----------------------------------------------------------------------

#define ASSERT_CMD_RESPONSE_SIZE(size) \
  this->assertCmdResponse_size(__FILE__, __LINE__, size)

#define ASSERT_CMD_RESPONSE(index, opCode, cmdSeq, response) \
  this->assertCmdResponse(__FILE__, __LINE__, index, opCode, cmdSeq, response)

// ----------------------------------------------------------------------
// Macros for event history assertions
// ----------------------------------------------------------------------

#define ASSERT_EVENTS_SIZE(size) \
  this->assertEvents_size(__FILE__, __LINE__, size)

// ----------------------------------------------------------------------
// Macros for telemetry history assertions
// ----------------------------------------------------------------------

#define ASSERT_TLM_SIZE(size) \
  this->assertTlm_size(__FILE__, __LINE__, size)

//! \class EmptyGTestBase
//! \brief Auto-generated base for Empty component Google Test harness
class EmptyGTestBase :
  public EmptyTesterBase
{

  protected:

    // ----------------------------------------------------------------------
    // Construction and destruction
    // ----------------------------------------------------------------------

    //! Construct object EmptyGTestBase
    EmptyGTestBase(
        const char* const compName, //!< The component name
        const U32 maxHistorySize //!< The maximum size of each history
    );

    //! Destroy object EmptyGTestBase
    ~EmptyGTestBase();

};

#endif
