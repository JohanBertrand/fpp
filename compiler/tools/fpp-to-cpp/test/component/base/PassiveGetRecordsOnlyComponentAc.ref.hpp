// ======================================================================
// \title  PassiveGetRecordsOnlyComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for PassiveGetRecordsOnly component base class
// ======================================================================

#ifndef PassiveGetRecordsOnlyComponentAc_HPP
#define PassiveGetRecordsOnlyComponentAc_HPP

#include "FpConfig.hpp"
#include "Fw/Comp/ActiveComponentBase.hpp"
#include "Fw/Dp/DpContainer.hpp"
#include "Fw/Dp/DpGetPortAc.hpp"
#include "Fw/Dp/DpSendPortAc.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Port/OutputSerializePort.hpp"
#include "Fw/Time/TimePortAc.hpp"

//! \class PassiveGetRecordsOnlyComponentBase
//! \brief Auto-generated base for PassiveGetRecordsOnly component
//!
//! A passive component with product get and records only
class PassiveGetRecordsOnlyComponentBase :
  public Fw::PassiveComponentBase
{

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    friend class PassiveGetRecordsOnlyComponentBaseFriend;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Constants
    // ----------------------------------------------------------------------

    //! Enumerations for numbers of special output ports
    enum {
      NUM_PRODUCTGETOUT_OUTPUT_PORTS = 1,
      NUM_PRODUCTSENDOUT_OUTPUT_PORTS = 1,
      NUM_TIMEGETOUT_OUTPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Types for data products
    // ----------------------------------------------------------------------

    //! The record ids
    struct RecordId {
      enum T : FwDpIdType {
        U32Record = 100,
      };
    };

    //! A data product container
    class DpContainer :
      public Fw::DpContainer
    {

      public:

        //! Constructor with custom initialization
        DpContainer(
            FwDpIdType id, //!< The container id
            const Fw::Buffer& buffer, //!< The packet buffer
            FwDpIdType baseId //!< The component base id
        );

        //! Constructor with default initialization
        DpContainer();

      public:

        //! Serialize a U32Record record into the packet buffer
        //! \return The serialize status
        Fw::SerializeStatus serializeRecord_U32Record(
            U32 elt //!< The element
        );

        FwDpIdType getBaseId() const { return this->baseId; }

        void setBaseId(FwDpIdType baseId) { this->baseId = baseId; }

      PRIVATE:

        //! The component base id
        FwDpIdType baseId;

    };

  public:

    // ----------------------------------------------------------------------
    // Component initialization
    // ----------------------------------------------------------------------

    //! Initialize PassiveGetRecordsOnlyComponentBase object
    void init(
        NATIVE_INT_TYPE instance = 0 //!< The instance number
    );

  public:

    // ----------------------------------------------------------------------
    // Connect input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to productGetOut[portNum]
    void set_productGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputDpGetPort* port //!< The input port
    );

    //! Connect port to productSendOut[portNum]
    void set_productSendOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputDpSendPort* port //!< The input port
    );

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputTimePort* port //!< The input port
    );

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serial input ports to special output ports
    // ----------------------------------------------------------------------

    //! Connect port to productSendOut[portNum]
    void set_productSendOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

    //! Connect port to timeGetOut[portNum]
    void set_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputSerializePort* port //!< The port
    );

#endif

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct PassiveGetRecordsOnlyComponentBase object
    PassiveGetRecordsOnlyComponentBase(
        const char* compName = "" //!< The component name
    );

    //! Destroy PassiveGetRecordsOnlyComponentBase object
    virtual ~PassiveGetRecordsOnlyComponentBase();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of special output ports
    // ----------------------------------------------------------------------

    //! Get the number of productGetOut output ports
    //!
    //! \return The number of productGetOut output ports
    NATIVE_INT_TYPE getNum_productGetOut_OutputPorts() const;

    //! Get the number of productSendOut output ports
    //!
    //! \return The number of productSendOut output ports
    NATIVE_INT_TYPE getNum_productSendOut_OutputPorts() const;

    //! Get the number of timeGetOut output ports
    //!
    //! \return The number of timeGetOut output ports
    NATIVE_INT_TYPE getNum_timeGetOut_OutputPorts() const;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for special output ports
    // ----------------------------------------------------------------------

    //! Check whether port productGetOut is connected
    //!
    //! \return Whether port productGetOut is connected
    bool isConnected_productGetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port productSendOut is connected
    //!
    //! \return Whether port productSendOut is connected
    bool isConnected_productSendOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port timeGetOut is connected
    //!
    //! \return Whether port timeGetOut is connected
    bool isConnected_timeGetOut_OutputPort(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for special output ports
    // ----------------------------------------------------------------------

    //! Invoke output port productGetOut
    Fw::Success productGetOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container ID
        FwSizeType size, //!< The size of the requested buffer
        Fw::Buffer& buffer //!< The buffer
    );

    //! Invoke output port productSendOut
    void productSendOut_out(
        NATIVE_INT_TYPE portNum, //!< The port number
        FwDpIdType id, //!< The container ID
        const Fw::Buffer& buffer //!< The buffer
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Functions for managing data products
    // ----------------------------------------------------------------------

    //! Send a data product
    void dpSend(
        DpContainer& container, //!< The data product container
        Fw::Time timeTag = Fw::ZERO_TIME //!< The time tag
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Time
    // ----------------------------------------------------------------------

    //!  Get the time
    //!
    //! \\return The current time
    Fw::Time getTime();

  PRIVATE:

    // ----------------------------------------------------------------------
    // Special output ports
    // ----------------------------------------------------------------------

    //! Output port productGetOut
    Fw::OutputDpGetPort m_productGetOut_OutputPort[NUM_PRODUCTGETOUT_OUTPUT_PORTS];

    //! Output port productSendOut
    Fw::OutputDpSendPort m_productSendOut_OutputPort[NUM_PRODUCTSENDOUT_OUTPUT_PORTS];

    //! Output port timeGetOut
    Fw::OutputTimePort m_timeGetOut_OutputPort[NUM_TIMEGETOUT_OUTPUT_PORTS];

};

#endif
