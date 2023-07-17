// ======================================================================
// \title  QueuedCommandsTesterBase.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for QueuedCommands component test harness base class
// ======================================================================

#ifndef QueuedCommandsTesterBase_HPP
#define QueuedCommandsTesterBase_HPP

#include <cstdio>

#include "Fw/Comp/PassiveComponentBase.hpp"
#include "Fw/Port/InputSerializePort.hpp"
#include "Fw/Types/Assert.hpp"
#include "test/QueuedCommandsComponentAc.hpp"

//! \class QueuedCommandsTesterBase
//! \brief Auto-generated base for QueuedCommands component test harness
class QueuedCommandsTesterBase :
  public Fw::PassiveComponentBase
{

  public:

    // ----------------------------------------------------------------------
    // Component initialization
    // ----------------------------------------------------------------------

    //! Initialize object QueuedCommandsTesterBase
    virtual void init(
        NATIVE_INT_TYPE instance = 0 //!< The instance number
    );

  public:

    // ----------------------------------------------------------------------
    // Connectors for to ports
    // ----------------------------------------------------------------------

    //! Connect port to cmdIn[portNum]
    void connect_to_cmdIn(
        NATIVE_INT_TYPE portNum, //!< The port number
        Fw::InputCmdPort* port //!< The input port
    );

    //! Connect port to noArgsAsync[portNum]
    void connect_to_noArgsAsync(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputNoArgsPort* port //!< The input port
    );

    //! Connect port to noArgsGuarded[portNum]
    void connect_to_noArgsGuarded(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputNoArgsPort* port //!< The input port
    );

    //! Connect port to noArgsReturnGuarded[portNum]
    void connect_to_noArgsReturnGuarded(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputNoArgsReturnPort* port //!< The input port
    );

    //! Connect port to noArgsReturnSync[portNum]
    void connect_to_noArgsReturnSync(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputNoArgsReturnPort* port //!< The input port
    );

    //! Connect port to noArgsSync[portNum]
    void connect_to_noArgsSync(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputNoArgsPort* port //!< The input port
    );

    //! Connect port to typedAsync[portNum]
    void connect_to_typedAsync(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedPort* port //!< The input port
    );

    //! Connect port to typedAsyncAssert[portNum]
    void connect_to_typedAsyncAssert(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedPort* port //!< The input port
    );

    //! Connect port to typedAsyncBlockPriority[portNum]
    void connect_to_typedAsyncBlockPriority(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedPort* port //!< The input port
    );

    //! Connect port to typedAsyncDropPriority[portNum]
    void connect_to_typedAsyncDropPriority(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedPort* port //!< The input port
    );

    //! Connect port to typedGuarded[portNum]
    void connect_to_typedGuarded(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedPort* port //!< The input port
    );

    //! Connect port to typedReturnGuarded[portNum]
    void connect_to_typedReturnGuarded(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedReturnPort* port //!< The input port
    );

    //! Connect port to typedReturnSync[portNum]
    void connect_to_typedReturnSync(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedReturnPort* port //!< The input port
    );

    //! Connect port to typedSync[portNum]
    void connect_to_typedSync(
        NATIVE_INT_TYPE portNum, //!< The port number
        InputTypedPort* port //!< The input port
    );

  public:

    // ----------------------------------------------------------------------
    // Getters for from ports
    // ----------------------------------------------------------------------

    //! Get from port at index
    //!
    //! \return from_cmdRegOut[portNum]
    Fw::InputCmdRegPort* get_from_cmdRegOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get from port at index
    //!
    //! \return from_cmdResponseOut[portNum]
    Fw::InputCmdResponsePort* get_from_cmdResponseOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get from port at index
    //!
    //! \return from_eventOut[portNum]
    Fw::InputLogPort* get_from_eventOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get from port at index
    //!
    //! \return from_prmGetOut[portNum]
    Fw::InputPrmGetPort* get_from_prmGetOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get from port at index
    //!
    //! \return from_prmSetOut[portNum]
    Fw::InputPrmSetPort* get_from_prmSetOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

#if FW_ENABLE_TEXT_LOGGING == 1

    //! Get from port at index
    //!
    //! \return from_textEventOut[portNum]
    Fw::InputLogTextPort* get_from_textEventOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

#endif

    //! Get from port at index
    //!
    //! \return from_timeGetOut[portNum]
    Fw::InputTimePort* get_from_timeGetOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get from port at index
    //!
    //! \return from_tlmOut[portNum]
    Fw::InputTlmPort* get_from_tlmOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get from port at index
    //!
    //! \return from_typedOut[portNum]
    InputTypedPort* get_from_typedOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Get from port at index
    //!
    //! \return from_typedReturnOut[portNum]
    InputTypedReturnPort* get_from_typedReturnOut(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  protected:

    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct object QueuedCommandsTesterBase
    QueuedCommandsTesterBase(
        const char* const compName, //!< The component name
        U32 maxHistorySize //!< The maximum size of each history
    );

    //! Destroy object QueuedCommandsTesterBase
    virtual ~QueuedCommandsTesterBase();

  protected:

    // ----------------------------------------------------------------------
    // Handlers to implement for from ports
    // ----------------------------------------------------------------------

    //! Handler for input port from_typedOut
    virtual void from_typedOut_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

    //! Handler for input port from_typedReturnOut
    virtual F32 from_typedReturnOut_handler(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    ) = 0;

  protected:

    // ----------------------------------------------------------------------
    // Handler base-class functions for from ports
    // ----------------------------------------------------------------------

    //! Handler base-class function for from_typedOut
    void from_typedOut_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Handler base-class function for from_typedReturnOut
    F32 from_typedReturnOut_handlerBase(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  protected:

    // ----------------------------------------------------------------------
    // Invocation functions for to ports
    // ----------------------------------------------------------------------

    //! Invoke the to port connected to noArgsAsync
    void invoke_to_noArgsAsync(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Invoke the to port connected to noArgsGuarded
    void invoke_to_noArgsGuarded(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Invoke the to port connected to noArgsReturnGuarded
    U32 invoke_to_noArgsReturnGuarded(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Invoke the to port connected to noArgsReturnSync
    U32 invoke_to_noArgsReturnSync(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Invoke the to port connected to noArgsSync
    void invoke_to_noArgsSync(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Invoke the to port connected to typedAsync
    void invoke_to_typedAsync(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke the to port connected to typedAsyncAssert
    void invoke_to_typedAsyncAssert(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke the to port connected to typedAsyncBlockPriority
    void invoke_to_typedAsyncBlockPriority(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke the to port connected to typedAsyncDropPriority
    void invoke_to_typedAsyncDropPriority(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke the to port connected to typedGuarded
    void invoke_to_typedGuarded(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke the to port connected to typedReturnGuarded
    F32 invoke_to_typedReturnGuarded(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke the to port connected to typedReturnSync
    F32 invoke_to_typedReturnSync(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Invoke the to port connected to typedSync
    void invoke_to_typedSync(
        NATIVE_INT_TYPE portNum, //!< The port number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

  protected:

    // ----------------------------------------------------------------------
    // Getters for port counts
    // ----------------------------------------------------------------------

    //! Get the number of getNum_to_noArgsAsync ports
    //!
    //! \return The number of getNum_to_noArgsAsync ports
    NATIVE_INT_TYPE to_noArgsAsync();

    //! Get the number of getNum_to_noArgsGuarded ports
    //!
    //! \return The number of getNum_to_noArgsGuarded ports
    NATIVE_INT_TYPE to_noArgsGuarded();

    //! Get the number of getNum_to_noArgsReturnGuarded ports
    //!
    //! \return The number of getNum_to_noArgsReturnGuarded ports
    NATIVE_INT_TYPE to_noArgsReturnGuarded();

    //! Get the number of getNum_to_noArgsReturnSync ports
    //!
    //! \return The number of getNum_to_noArgsReturnSync ports
    NATIVE_INT_TYPE to_noArgsReturnSync();

    //! Get the number of getNum_to_noArgsSync ports
    //!
    //! \return The number of getNum_to_noArgsSync ports
    NATIVE_INT_TYPE to_noArgsSync();

    //! Get the number of getNum_to_typedAsync ports
    //!
    //! \return The number of getNum_to_typedAsync ports
    NATIVE_INT_TYPE to_typedAsync();

    //! Get the number of getNum_to_typedAsyncAssert ports
    //!
    //! \return The number of getNum_to_typedAsyncAssert ports
    NATIVE_INT_TYPE to_typedAsyncAssert();

    //! Get the number of getNum_to_typedAsyncBlockPriority ports
    //!
    //! \return The number of getNum_to_typedAsyncBlockPriority ports
    NATIVE_INT_TYPE to_typedAsyncBlockPriority();

    //! Get the number of getNum_to_typedAsyncDropPriority ports
    //!
    //! \return The number of getNum_to_typedAsyncDropPriority ports
    NATIVE_INT_TYPE to_typedAsyncDropPriority();

    //! Get the number of getNum_to_typedGuarded ports
    //!
    //! \return The number of getNum_to_typedGuarded ports
    NATIVE_INT_TYPE to_typedGuarded();

    //! Get the number of getNum_to_typedReturnGuarded ports
    //!
    //! \return The number of getNum_to_typedReturnGuarded ports
    NATIVE_INT_TYPE to_typedReturnGuarded();

    //! Get the number of getNum_to_typedReturnSync ports
    //!
    //! \return The number of getNum_to_typedReturnSync ports
    NATIVE_INT_TYPE to_typedReturnSync();

    //! Get the number of getNum_to_typedSync ports
    //!
    //! \return The number of getNum_to_typedSync ports
    NATIVE_INT_TYPE to_typedSync();

    //! Get the number of getNum_from_typedOut ports
    //!
    //! \return The number of getNum_from_typedOut ports
    NATIVE_INT_TYPE from_typedOut();

    //! Get the number of getNum_from_typedReturnOut ports
    //!
    //! \return The number of getNum_from_typedReturnOut ports
    NATIVE_INT_TYPE from_typedReturnOut();

  protected:

    // ----------------------------------------------------------------------
    // Connection status queries for to ports
    // ----------------------------------------------------------------------

    //! Check whether port to_noArgsAsync is connected
    //!
    //! \return Whether port to_noArgsAsync is connected
    bool isConnected_to_noArgsAsync(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_noArgsGuarded is connected
    //!
    //! \return Whether port to_noArgsGuarded is connected
    bool isConnected_to_noArgsGuarded(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_noArgsReturnGuarded is connected
    //!
    //! \return Whether port to_noArgsReturnGuarded is connected
    bool isConnected_to_noArgsReturnGuarded(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_noArgsReturnSync is connected
    //!
    //! \return Whether port to_noArgsReturnSync is connected
    bool isConnected_to_noArgsReturnSync(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_noArgsSync is connected
    //!
    //! \return Whether port to_noArgsSync is connected
    bool isConnected_to_noArgsSync(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_typedAsync is connected
    //!
    //! \return Whether port to_typedAsync is connected
    bool isConnected_to_typedAsync(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_typedAsyncAssert is connected
    //!
    //! \return Whether port to_typedAsyncAssert is connected
    bool isConnected_to_typedAsyncAssert(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_typedAsyncBlockPriority is connected
    //!
    //! \return Whether port to_typedAsyncBlockPriority is connected
    bool isConnected_to_typedAsyncBlockPriority(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_typedAsyncDropPriority is connected
    //!
    //! \return Whether port to_typedAsyncDropPriority is connected
    bool isConnected_to_typedAsyncDropPriority(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_typedGuarded is connected
    //!
    //! \return Whether port to_typedGuarded is connected
    bool isConnected_to_typedGuarded(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_typedReturnGuarded is connected
    //!
    //! \return Whether port to_typedReturnGuarded is connected
    bool isConnected_to_typedReturnGuarded(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_typedReturnSync is connected
    //!
    //! \return Whether port to_typedReturnSync is connected
    bool isConnected_to_typedReturnSync(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_typedSync is connected
    //!
    //! \return Whether port to_typedSync is connected
    bool isConnected_to_typedSync(
        NATIVE_INT_TYPE portNum //!< The port number
    );

    //! Check whether port to_cmdIn is connected
    //!
    //! \return Whether port to_cmdIn is connected
    bool isConnected_to_cmdIn(
        NATIVE_INT_TYPE portNum //!< The port number
    );

  protected:

    // ----------------------------------------------------------------------
    // Functions for testing commands
    // ----------------------------------------------------------------------

    //! Handle a command response
    virtual void cmdResponseIn(
        FwOpcodeType opCode, //!< The opcode
        U32 cmdSeq, //!< The command sequence number
        Fw::CmdResponse response //!< The command response
    );

    //! Send command buffers directly (used for intentional command encoding errors)
    void sendRawCmd(
        FwOpcodeType opCode, //!< The opcode
        U32 cmdSeq, //!< The command sequence number
        Fw::CmdBufferArg& args //!< The command argument buffer
    );

    //! Send a CMD_SYNC command
    void sendCmd_CMD_SYNC(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq //!< The command sequence number
    );

    //! Send a CMD_SYNC_PRIMITIVE command
    void sendCmd_CMD_SYNC_PRIMITIVE(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b //!< A boolean
    );

    //! Send a CMD_SYNC_STRING command
    void sendCmd_CMD_SYNC_STRING(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        const Fw::CmdStringArg& str1, //!< A string
        const Fw::CmdStringArg& str2 //!< Another string
    );

    //! Send a CMD_SYNC_ENUM command
    void sendCmd_CMD_SYNC_ENUM(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        E e //!< An enum
    );

    //! Send a CMD_SYNC_ARRAY command
    void sendCmd_CMD_SYNC_ARRAY(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        A a //!< An array
    );

    //! Send a CMD_SYNC_STRUCT command
    void sendCmd_CMD_SYNC_STRUCT(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        S s //!< A struct
    );

    //! Send a CMD_GUARDED command
    void sendCmd_CMD_GUARDED(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq //!< The command sequence number
    );

    //! Send a CMD_GUARDED_PRIMITIVE command
    void sendCmd_CMD_GUARDED_PRIMITIVE(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b //!< A boolean
    );

    //! Send a CMD_GUARDED_STRING command
    void sendCmd_CMD_GUARDED_STRING(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        const Fw::CmdStringArg& str1, //!< A string
        const Fw::CmdStringArg& str2 //!< Another string
    );

    //! Send a CMD_GUARDED_ENUM command
    void sendCmd_CMD_GUARDED_ENUM(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        E e //!< An enum
    );

    //! Send a CMD_GUARDED_ARRAY command
    void sendCmd_CMD_GUARDED_ARRAY(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        A a //!< An array
    );

    //! Send a CMD_GUARDED_STRUCT command
    void sendCmd_CMD_GUARDED_STRUCT(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        S s //!< A struct
    );

    //! Send a CMD_ASYNC command
    void sendCmd_CMD_ASYNC(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq //!< The command sequence number
    );

    //! Send a CMD_PRIORITY command
    void sendCmd_CMD_PRIORITY(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq //!< The command sequence number
    );

    //! Send a CMD_PARAMS_PRIORITY command
    void sendCmd_CMD_PARAMS_PRIORITY(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        U32 u32
    );

    //! Send a CMD_DROP command
    void sendCmd_CMD_DROP(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq //!< The command sequence number
    );

    //! Send a CMD_PARAMS_PRIORITY_DROP command
    void sendCmd_CMD_PARAMS_PRIORITY_DROP(
        const NATIVE_INT_TYPE instance, //!< The instance number
        U32 cmdSeq, //!< The command sequence number
        U32 u32
    );

  protected:

    // ----------------------------------------------------------------------
    // History class
    // ----------------------------------------------------------------------
    //! \class History
    //! \brief A history of port inputs
    //!
    template<typename T>
    class History
    {

      public:

        //! Create a History
        History(
           const U32 maxSize //!< The maximum history size
        ) :
          numEntries(0),
          maxSize(maxSize)
        {
          this->entries = new T[maxSize];
        }

        //! Destroy a History
        ~History()
        {
          delete[] this->entries;
        }

        //! Clear the history
        //!
        void clear()
        {
          this->numEntries = 0;
        }

        //! Push an item onto the history
        //!
        void push_back(
            T entry //!< The item
        )
        {
          FW_ASSERT(this->numEntries < this->maxSize);
          entries[this->numEntries++] = entry;
        }

        //! Get an item at an index
        //!
        //! \return The item at index i
        T at(
            const U32 i //!< The index
        ) const
        {
          FW_ASSERT(i < this->numEntries);
          return entries[i];
        }

        //! Get the number of entries in the history
        //!
        //! \return The number of entries in the history
        U32 size() const
        {
          return this->numEntries;
        }

      private:

        //! The number of entries in the history
        U32 numEntries;

        //! The maximum history size
        const U32 maxSize;

        //! The entries
        T* entries;

    };

    struct FromPortEntry_typedOut {
      U32 u32,
      F32 f32,
      bool b,
      TypedPortStrings::StringSize80 str1,
      E e,
      A a,
      S s
    };

    struct FromPortEntry_typedReturnOut {
      U32 u32,
      F32 f32,
      bool b,
      TypedReturnPortStrings::StringSize80 str2,
      E e,
      A a,
      S s
    };

    //! A type representing a command response
    struct CmdResponse {
      FwOpcodeType opCode;
      U32 cmdSeq;
      Fw::CmdResponse response;
    };

  protected:

    // ----------------------------------------------------------------------
    // History functions
    // ----------------------------------------------------------------------

    //! Clear all history
    void clearHistory();

    //! Clear from port history
    void clearFromPortHistory();

    //! Push an entry on the history for from_typedOut
    void pushFromPortEntry_typedOut(
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedPortStrings::StringSize80& str1, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! Push an entry on the history for from_typedReturnOut
    void pushFromPortEntry_typedReturnOut(
        U32 u32, //!< A U32
        F32 f32, //!< An F32
        bool b, //!< A boolean
        const TypedReturnPortStrings::StringSize80& str2, //!< A string
        const E& e, //!< An enum
        const A& a, //!< An array
        const S& s //!< A struct
    );

    //! The total number of port entries
    U32 fromPortHistorySize;

    //! The history for from_typedOut
    History<FromPortEntry_typedOut>* fromPortHistory_typedOut;

    //! The history for from_typedReturnOut
    History<FromPortEntry_typedReturnOut>* fromPortHistory_typedReturnOut;

    //! The command response history
    History<CmdResponse>* cmdResponseHistory;

};

#endif
