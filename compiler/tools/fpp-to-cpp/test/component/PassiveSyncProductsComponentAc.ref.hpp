// ======================================================================
// \title  PassiveSyncProductsComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PassiveSyncProducts component base class
// ======================================================================

#ifndef PassiveSyncProductsComponentAc_HPP
#define PassiveSyncProductsComponentAc_HPP

#include "FpConfig.hpp"
#include "Fw/Cmd/CmdPortAc.hpp"
#include "Fw/Cmd/CmdRegPortAc.hpp"
#include "Fw/Cmd/CmdResponsePortAc.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Dp/DpContainer.hpp"
#include "Fw/Dp/DpRequestPortAc.hpp"
#include "Fw/Dp/DpResponsePortAc.hpp"
#include "Fw/Dp/DpSendPortAc.hpp"
#include "Fw/Log/LogPortAc.hpp"
#if FW_ENABLE_TEXT_LOGGING == 1
#include "Fw/Log/LogTextPortAc.hpp"
#endif
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Fw/Prm/PrmGetPortAc.hpp"
#include "Fw/Prm/PrmSetPortAc.hpp"
#include "Fw/Time/TimePortAc.hpp"
#include "Fw/Tlm/TlmPortAc.hpp"
#include "Fw/Types/ByteArray.hpp"
#include "NoArgsPortAc.hpp"
#include "NoArgsReturnPortAc.hpp"
#include "Os/Mutex.hpp"
#include "PassiveSyncProducts_DataSerializableAc.hpp"
#include "TypedPortAc.hpp"
#include "TypedReturnPortAc.hpp"

//! \class PassiveSyncProductsComponentBase
//! \brief Auto-generated base for PassiveSyncProducts component
//!
//! A passive component with sync data products
class PassiveSyncProductsComponentBase :
  public Fw::PassiveComponentBase
{

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    friend class PassiveSyncProductsComponentBaseFriend;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    //! Enumerations for numbers of special input ports
    enum {
      NUM_CMDIN_INPUT_PORTS = 1,
      NUM_PRODUCTRECVIN_INPUT_PORTS = 1,
    };

    //! Enumerations for numbers of typed input ports
    enum {
      NUM_NOARGSGUARDED_INPUT_PORTS = 1,
      NUM_NOARGSRETURNGUARDED_INPUT_PORTS = 1,
      NUM_NOARGSRETURNSYNC_INPUT_PORTS = 3,
      NUM_NOARGSSYNC_INPUT_PORTS = 3,
      NUM_TYPEDGUARDED_INPUT_PORTS = 1,
      NUM_TYPEDRETURNGUARDED_INPUT_PORTS = 1,
      NUM_TYPEDRETURNSYNC_INPUT_PORTS = 3,
      NUM_TYPEDSYNC_INPUT_PORTS = 3,
    };

    //! Enumerations for numbers of special output ports
    enum {
      NUM_CMDREGOUT_OUTPUT_PORTS = 1,
      NUM_CMDRESPONSEOUT_OUTPUT_PORTS = 1,
      NUM_EVENTOUT_OUTPUT_PORTS = 1,
      NUM_PRMGETOUT_OUTPUT_PORTS = 1,
      NUM_PRMSETOUT_OUTPUT_PORTS = 1,
      NUM_PRODUCTREQUESTOUT_OUTPUT_PORTS = 1,
      NUM_PRODUCTSENDOUT_OUTPUT_PORTS = 1,
      NUM_TEXTEVENTOUT_OUTPUT_PORTS = 1,
      NUM_TIMEGETOUT_OUTPUT_PORTS = 1,
      NUM_TLMOUT_OUTPUT_PORTS = 1,
    };

    //! Enumerations for numbers of typed output ports
    enum {
      NUM_TYPEDOUT_OUTPUT_PORTS = 1,
      NUM_TYPEDRETURNOUT_OUTPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Types for data products
    // ----------------------------------------------------------------------

    //! The container ids
    struct ContainerId {
      enum T : FwDpIdType {
        Container1 = 100,
        Container2 = 200,
        Container3 = 300,
      };
    };

    //! The container default priorities
    struct ContainerPriority {
      enum T : FwDpPriorityType {
        Container1 = 10,
        Container2 = 20,
        Container3 = 0,
      };
    };

    //! The record ids
    struct RecordId {
      enum T : FwDpIdType {
        U32Record = 100,
        DataRecord = 200,
        RawRecord = 300,
      };
    };

    //! A data product container
    class DpContainer :
      public Fw::DpContainer
    {

      public:

        //! Constructor
        DpContainer(
            FwDpIdType id, //!< The container id
            const Fw::Buffer& buffer, //!< The packet buffer
            FwDpIdType baseId //!< The component base id
        );

      public:

        //! Serialize a DataRecord record into the packet buffer
        //! \return The serialize status
        Fw::SerializeStatus serializeRecord_DataRecord(
            const PassiveSyncProducts_Data& elt //!< The element
        );

        //! Serialize a RawRecord record into the packet buffer
        //! \return The serialize status
        Fw::SerializeStatus serializeRecord_RawRecord(
            Fw::ByteArray byteArray //!< The raw byte array
        );

        //! Serialize a U32Record record into the packet buffer
        //! \return The serialize status
        Fw::SerializeStatus serializeRecord_U32Record(
            U32 elt //!< The element
        );

      PRIVATE:

        //! The component base id
        FwDpIdType baseId;

    };

  public:

    // ----------------------------------------------------------------------
    // Component initialization
    // ----------------------------------------------------------------------

    //! Initialize PassiveSyncProductsComponentBase object
    void init(
        NATIVE_INT_TYPE instance = 0 //!< The instance number
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for special input ports
    // ----------------------------------------------------------------------

    //! Get special input port at index
    //!
    //! \return cmdIn[portNum]
    Fw::InputCmdPort* get_cmdIn_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get special input port at index
    //!
    //! \return productRecvIn[portNum]
    Fw::InputDpResponsePort* get_productRecvIn_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for typed input ports
    // ----------------------------------------------------------------------

    //! Get typed input port at index
    //!
    //! \return noArgsGuarded[portNum]
    InputNoArgsPort* get_noArgsGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return noArgsReturnGuarded[portNum]
    InputNoArgsReturnPort* get_noArgsReturnGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return noArgsReturnSync[portNum]
    InputNoArgsReturnPort* get_noArgsReturnSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return noArgsSync[portNum]
    InputNoArgsPort* get_noArgsSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedGuarded[portNum]
    InputTypedPort* get_typedGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedReturnGuarded[portNum]
    InputTypedReturnPort* get_typedReturnGuarded_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedReturnSync[portNum]
    InputTypedReturnPort* get_typedReturnSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get typed input port at index
    //!
    //! \return typedSync[portNum]
    InputTypedPort* get_typedSync_InputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  public:

    // ----------------------------------------------------------------------
    // Connect input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    void set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputCmdRegPort* port //!< The input port
    );

    //! Connect port to cmdResponseOut[portNum]
    void set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputCmdResponsePort* port //!< The input port
    );

    //! Connect port to eventOut[portNum]
    void set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputLogPort* port //!< The input port
    );

    //! Connect port to prmGetOut[portNum]
    void set_prmGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputPrmGetPort* port //!< The input port
    );

    //! Connect port to prmSetOut[portNum]
    void set_prmSetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputPrmSetPort* port //!< The input port
    );

    //! Connect port to productRequestOut[portNum]
    void set_productRequestOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputDpRequestPort* port //!< The input port
    );

    //! Connect port to productSendOut[portNum]
    void set_productSendOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputDpSendPort* port //!< The input port
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Connect port to textEventOut[portNum]
    void set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputLogTextPort* port //!< The input port
    );

#endif

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputTimePort* port //!< The input port
    );

    //! Connect port to tlmOut[portNum]
    void set_tlmOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputTlmPort* port //!< The input port
    );

  public:

    // ----------------------------------------------------------------------
    // Connect typed input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to typedOut[portNum]
    void set_typedOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedPort* port //!< The input port
    );

    //! Connect port to typedReturnOut[portNum]
    void set_typedReturnOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedReturnPort* port //!< The input port
    );

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdRegOut[portNum]
    void set_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to cmdResponseOut[portNum]
    void set_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to eventOut[portNum]
    void set_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to prmSetOut[portNum]
    void set_prmSetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to productRequestOut[portNum]
    void set_productRequestOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to productSendOut[portNum]
    void set_productSendOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Connect port to textEventOut[portNum]
    void set_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to tlmOut[portNum]
    void set_tlmOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to typedOut[portNum]
    void set_typedOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct PassiveSyncProductsComponentBase object
    PassiveSyncProductsComponentBase(
        const char* compName = "" //!< The component name
    );

    //! Destroy PassiveSyncProductsComponentBase object
    virtual ~PassiveSyncProductsComponentBase();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of special input ports
    // ----------------------------------------------------------------------

    //! Get the number of cmdIn input ports
    //!
    //! \return The number of cmdIn input ports
    NATIVE_INT_TYPE getNum_cmdIn_InputPorts();

    //! Get the number of productRecvIn input ports
    //!
    //! \return The number of productRecvIn input ports
    NATIVE_INT_TYPE getNum_productRecvIn_InputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of typed input ports
    // ----------------------------------------------------------------------

    //! Get the number of noArgsGuarded input ports
    //!
    //! \return The number of noArgsGuarded input ports
    NATIVE_INT_TYPE getNum_noArgsGuarded_InputPorts();

    //! Get the number of noArgsReturnGuarded input ports
    //!
    //! \return The number of noArgsReturnGuarded input ports
    NATIVE_INT_TYPE getNum_noArgsReturnGuarded_InputPorts();

    //! Get the number of noArgsReturnSync input ports
    //!
    //! \return The number of noArgsReturnSync input ports
    NATIVE_INT_TYPE getNum_noArgsReturnSync_InputPorts();

    //! Get the number of noArgsSync input ports
    //!
    //! \return The number of noArgsSync input ports
    NATIVE_INT_TYPE getNum_noArgsSync_InputPorts();

    //! Get the number of typedGuarded input ports
    //!
    //! \return The number of typedGuarded input ports
    NATIVE_INT_TYPE getNum_typedGuarded_InputPorts();

    //! Get the number of typedReturnGuarded input ports
    //!
    //! \return The number of typedReturnGuarded input ports
    NATIVE_INT_TYPE getNum_typedReturnGuarded_InputPorts();

    //! Get the number of typedReturnSync input ports
    //!
    //! \return The number of typedReturnSync input ports
    NATIVE_INT_TYPE getNum_typedReturnSync_InputPorts();

    //! Get the number of typedSync input ports
    //!
    //! \return The number of typedSync input ports
    NATIVE_INT_TYPE getNum_typedSync_InputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of special output ports
    // ----------------------------------------------------------------------

    //! Get the number of cmdRegOut output ports
    //!
    //! \return The number of cmdRegOut output ports
    NATIVE_INT_TYPE getNum_cmdRegOut_OutputPorts();

    //! Get the number of cmdResponseOut output ports
    //!
    //! \return The number of cmdResponseOut output ports
    NATIVE_INT_TYPE getNum_cmdResponseOut_OutputPorts();

    //! Get the number of eventOut output ports
    //!
    //! \return The number of eventOut output ports
    NATIVE_INT_TYPE getNum_eventOut_OutputPorts();

    //! Get the number of prmGetOut output ports
    //!
    //! \return The number of prmGetOut output ports
    NATIVE_INT_TYPE getNum_prmGetOut_OutputPorts();

    //! Get the number of prmSetOut output ports
    //!
    //! \return The number of prmSetOut output ports
    NATIVE_INT_TYPE getNum_prmSetOut_OutputPorts();

    //! Get the number of productRequestOut output ports
    //!
    //! \return The number of productRequestOut output ports
    NATIVE_INT_TYPE getNum_productRequestOut_OutputPorts();

    //! Get the number of productSendOut output ports
    //!
    //! \return The number of productSendOut output ports
    NATIVE_INT_TYPE getNum_productSendOut_OutputPorts();

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Get the number of textEventOut output ports
    //!
    //! \return The number of textEventOut output ports
    NATIVE_INT_TYPE getNum_textEventOut_OutputPorts();

#endif

    //! Get the number of timeGetOut output ports
    //!
    //! \return The number of timeGetOut output ports
    NATIVE_INT_TYPE getNum_timeGetOut_OutputPorts();

    //! Get the number of tlmOut output ports
    //!
    //! \return The number of tlmOut output ports
    NATIVE_INT_TYPE getNum_tlmOut_OutputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of typed output ports
    // ----------------------------------------------------------------------

    //! Get the number of typedOut output ports
    //!
    //! \return The number of typedOut output ports
    NATIVE_INT_TYPE getNum_typedOut_OutputPorts();

    //! Get the number of typedReturnOut output ports
    //!
    //! \return The number of typedReturnOut output ports
    NATIVE_INT_TYPE getNum_typedReturnOut_OutputPorts();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for special output ports
    // ----------------------------------------------------------------------

    //! Check whether port cmdRegOut is connected
    //!
    //! \return Whether port cmdRegOut is connected
    bool isConnected_cmdRegOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port cmdResponseOut is connected
    //!
    //! \return Whether port cmdResponseOut is connected
    bool isConnected_cmdResponseOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port eventOut is connected
    //!
    //! \return Whether port eventOut is connected
    bool isConnected_eventOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port prmGetOut is connected
    //!
    //! \return Whether port prmGetOut is connected
    bool isConnected_prmGetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port prmSetOut is connected
    //!
    //! \return Whether port prmSetOut is connected
    bool isConnected_prmSetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port productRequestOut is connected
    //!
    //! \return Whether port productRequestOut is connected
    bool isConnected_productRequestOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port productSendOut is connected
    //!
    //! \return Whether port productSendOut is connected
    bool isConnected_productSendOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Check whether port textEventOut is connected
    //!
    //! \return Whether port textEventOut is connected
    bool isConnected_textEventOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

#endif

    //! Check whether port timeGetOut is connected
    //!
    //! \return Whether port timeGetOut is connected
    bool isConnected_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port tlmOut is connected
    //!
    //! \return Whether port tlmOut is connected
    bool isConnected_tlmOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for typed output ports
    // ----------------------------------------------------------------------

    //! Check whether port typedOut is connected
    //!
    //! \return Whether port typedOut is connected
    bool isConnected_typedOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port typedReturnOut is connected
    //!
    //! \return Whether port typedReturnOut is connected
    bool isConnected_typedReturnOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for special input ports
    //
    // Call these functions directly to bypass the corresponding ports
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port productRecvIn
    void productRecvIn_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container ID
        const Fw::Buffer& buffer, //!< The buffer
        const Fw::Success& status //!< The status
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for typed input ports
    // ----------------------------------------------------------------------

    //! Handler for input port noArgsGuarded
    virtual void noArgsGuarded_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) = 0;

    //! Handler for input port noArgsReturnGuarded
    virtual U32 noArgsReturnGuarded_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) = 0;

    //! Handler for input port noArgsReturnSync
    virtual U32 noArgsReturnSync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) = 0;

    //! Handler for input port noArgsSync
    virtual void noArgsSync_handler(
        NATIVE_INT_TYPE portNum //!< The port number
    ) = 0;

    //! Handler for input port typedGuarded
    virtual void typedGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedReturnGuarded
    virtual F32 typedReturnGuarded_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedReturnSync
    virtual F32 typedReturnSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port typedSync
    virtual void typedSync_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for typed input ports
    //
    // Call these functions directly to bypass the corresponding ports
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port noArgsGuarded
    void noArgsGuarded_handlerBase(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler base-class function for input port noArgsReturnGuarded
    U32 noArgsReturnGuarded_handlerBase(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler base-class function for input port noArgsReturnSync
    U32 noArgsReturnSync_handlerBase(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler base-class function for input port noArgsSync
    void noArgsSync_handlerBase(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Handler base-class function for input port typedGuarded
    void typedGuarded_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedReturnGuarded
    F32 typedReturnGuarded_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedReturnSync
    F32 typedReturnSync_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for input port typedSync
    void typedSync_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Pre-message hooks for special async input ports
    //
    // Each of these functions is invoked just before processing a message
    // on the corresponding port. By default, they do nothing. You can
    // override them to provide specific pre-message behavior.
    // ----------------------------------------------------------------------

    //! Pre-message hook for async input port productRecvIn
    virtual void productRecvIn_preMsgHook(
        NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container ID
        const Fw::Buffer& buffer, //!< The buffer
        const Fw::Success& status //!< The status
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for special output ports
    // ----------------------------------------------------------------------

    //! Invoke output port productRequestOut
    void productRequestOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container ID
        FwSizeType size //!< The size of the requested buffer
    );

    //! Invoke output port productSendOut
    void productSendOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container ID
        const Fw::Buffer& buffer //!< The buffer
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for typed output ports
    // ----------------------------------------------------------------------

    //! Invoke output port typedOut
    void typedOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke output port typedReturnOut
    F32 typedReturnOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Functions for managing data products
    // ----------------------------------------------------------------------

    //! Request a data product container
    void Dp_Request(
        ContainerId::T containerId, //!< The container id
        FwSizeType size //!< The buffer size
    );

    //! Send a data product
    void Dp_Send(
        DpContainer& container, //!< The data product container
        Fw::Time timeTag = Fw::ZERO_TIME //!< The time tag
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for data products
    // ----------------------------------------------------------------------

    //! Receive a container of type Container1
    virtual void Dp_Recv_Container1_handler(
        DpContainer& container, //!< The container
        Fw::Success::T status //!< The container status
    ) = 0;

    //! Receive a container of type Container2
    virtual void Dp_Recv_Container2_handler(
        DpContainer& container, //!< The container
        Fw::Success::T status //!< The container status
    ) = 0;

    //! Receive a container of type Container3
    virtual void Dp_Recv_Container3_handler(
        DpContainer& container, //!< The container
        Fw::Success::T status //!< The container status
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Time
    // ----------------------------------------------------------------------

    //!  Get the time
    //!
    //! \\return The current time
    Fw::Time getTime();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Mutex operations for guarded ports
    //
    // You can override these operations to provide more sophisticated
    // synchronization
    // ----------------------------------------------------------------------

    //! Lock the guarded mutex
    virtual void lock();

    //! Unlock the guarded mutex
    virtual void unLock();

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on special input ports
    // ----------------------------------------------------------------------

    //! Callback for port cmdIn
    static void m_p_cmdIn_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        FwOpcodeType opCode, //!< Command Op Code
        U32 cmdSeq, //!< Command Sequence
        Fw::CmdArgBuffer& args //!< Buffer containing arguments
    );

    //! Callback for port productRecvIn
    static void m_p_productRecvIn_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container ID
        const Fw::Buffer& buffer, //!< The buffer
        const Fw::Success& status //!< The status
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on typed input ports
    // ----------------------------------------------------------------------

    //! Callback for port noArgsGuarded
    static void m_p_noArgsGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Callback for port noArgsReturnGuarded
    static U32 m_p_noArgsReturnGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Callback for port noArgsReturnSync
    static U32 m_p_noArgsReturnSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Callback for port noArgsSync
    static void m_p_noArgsSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Callback for port typedGuarded
    static void m_p_typedGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedReturnGuarded
    static F32 m_p_typedReturnGuarded_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedReturnSync
    static F32 m_p_typedReturnSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Callback for port typedSync
    static void m_p_typedSync_in(
        Fw::PassiveComponentBase* callComp, //!< The component instance
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Private data product handling functions
    // ----------------------------------------------------------------------

    //! Handler implementation for productRecvIn
    void productRecvIn_handler(
        const NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container id
        const Fw::Buffer& buffer, //!< The buffer
        const Fw::Success& status //!< The buffer status
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Special input ports
    // ----------------------------------------------------------------------

    //! Input port cmdIn
    Fw::InputCmdPort m_cmdIn_InputPort[NUM_CMDIN_INPUT_PORTS];

    //! Input port productRecvIn
    Fw::InputDpResponsePort m_productRecvIn_InputPort[NUM_PRODUCTRECVIN_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed input ports
    // ----------------------------------------------------------------------

    //! Input port noArgsGuarded
    InputNoArgsPort m_noArgsGuarded_InputPort[NUM_NOARGSGUARDED_INPUT_PORTS];

    //! Input port noArgsReturnGuarded
    InputNoArgsReturnPort m_noArgsReturnGuarded_InputPort[NUM_NOARGSRETURNGUARDED_INPUT_PORTS];

    //! Input port noArgsReturnSync
    InputNoArgsReturnPort m_noArgsReturnSync_InputPort[NUM_NOARGSRETURNSYNC_INPUT_PORTS];

    //! Input port noArgsSync
    InputNoArgsPort m_noArgsSync_InputPort[NUM_NOARGSSYNC_INPUT_PORTS];

    //! Input port typedGuarded
    InputTypedPort m_typedGuarded_InputPort[NUM_TYPEDGUARDED_INPUT_PORTS];

    //! Input port typedReturnGuarded
    InputTypedReturnPort m_typedReturnGuarded_InputPort[NUM_TYPEDRETURNGUARDED_INPUT_PORTS];

    //! Input port typedReturnSync
    InputTypedReturnPort m_typedReturnSync_InputPort[NUM_TYPEDRETURNSYNC_INPUT_PORTS];

    //! Input port typedSync
    InputTypedPort m_typedSync_InputPort[NUM_TYPEDSYNC_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Special output ports
    // ----------------------------------------------------------------------

    //! Output port cmdRegOut
    Fw::OutputCmdRegPort m_cmdRegOut_OutputPort[NUM_CMDREGOUT_OUTPUT_PORTS];

    //! Output port cmdResponseOut
    Fw::OutputCmdResponsePort m_cmdResponseOut_OutputPort[NUM_CMDRESPONSEOUT_OUTPUT_PORTS];

    //! Output port eventOut
    Fw::OutputLogPort m_eventOut_OutputPort[NUM_EVENTOUT_OUTPUT_PORTS];

    //! Output port prmGetOut
    Fw::OutputPrmGetPort m_prmGetOut_OutputPort[NUM_PRMGETOUT_OUTPUT_PORTS];

    //! Output port prmSetOut
    Fw::OutputPrmSetPort m_prmSetOut_OutputPort[NUM_PRMSETOUT_OUTPUT_PORTS];

    //! Output port productRequestOut
    Fw::OutputDpRequestPort m_productRequestOut_OutputPort[NUM_PRODUCTREQUESTOUT_OUTPUT_PORTS];

    //! Output port productSendOut
    Fw::OutputDpSendPort m_productSendOut_OutputPort[NUM_PRODUCTSENDOUT_OUTPUT_PORTS];

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Output port textEventOut
    Fw::OutputLogTextPort m_textEventOut_OutputPort[NUM_TEXTEVENTOUT_OUTPUT_PORTS];

#endif

    //! Output port timeGetOut
    Fw::OutputTimePort m_timeGetOut_OutputPort[NUM_TIMEGETOUT_OUTPUT_PORTS];

    //! Output port tlmOut
    Fw::OutputTlmPort m_tlmOut_OutputPort[NUM_TLMOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed output ports
    // ----------------------------------------------------------------------

    //! Output port typedOut
    OutputTypedPort m_typedOut_OutputPort[NUM_TYPEDOUT_OUTPUT_PORTS];

    //! Output port typedReturnOut
    OutputTypedReturnPort m_typedReturnOut_OutputPort[NUM_TYPEDRETURNOUT_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Mutexes
    // ----------------------------------------------------------------------

    //! Mutex for guarded ports
    Os::Mutex m_guardedPortMutex;

};

#endif
