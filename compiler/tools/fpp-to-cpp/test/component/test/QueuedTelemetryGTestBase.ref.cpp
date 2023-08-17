// ======================================================================
// \title  QueuedTelemetryGTestBase.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for QueuedTelemetry component Google Test harness base class
// ======================================================================

#include "test/QueuedTelemetryGTestBase.hpp"

// ----------------------------------------------------------------------
// Construction and destruction
// ----------------------------------------------------------------------

QueuedTelemetryGTestBase ::
  QueuedTelemetryGTestBase(
      const char* const compName,
      const U32 maxHistorySize
  ) :
    QueuedTelemetryTesterBase(compName, maxHistorySize)
{

}

QueuedTelemetryGTestBase ::
  ~QueuedTelemetryGTestBase()
{

}

// ----------------------------------------------------------------------
// From ports
// ----------------------------------------------------------------------

void QueuedTelemetryGTestBase ::
  assertFromPortHistory_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistorySize)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Total size of all from port histories\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistorySize << "\n";
}

void QueuedTelemetryGTestBase ::
  assert_from_typedOut(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistory_typedOut->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for from_typedOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistory_typedOut->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assert_from_typedReturnOut(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->fromPortHistory_typedOut->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for from_typedOut\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->fromPortHistory_typedReturnOut->size() << "\n";
}

// ----------------------------------------------------------------------
// Telemetry
// ----------------------------------------------------------------------

void QueuedTelemetryGTestBase ::
  assertTlm_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(size, this->tlmSize)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Total size of all telemetry histories\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmSize << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelU32Format_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelU32Format->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelU32Format\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelU32Format->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelU32Format(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const U32 val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelU32Format->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelU32Format\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelU32Format->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelU32Format& _e =
    this->tlmHistory_ChannelU32Format->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelU32Format\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelF32Format_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelF32Format->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelF32Format\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelF32Format->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelF32Format(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const F32 val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelF32Format->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelF32Format\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelF32Format->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelF32Format& _e =
    this->tlmHistory_ChannelF32Format->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelF32Format\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelStringFormat_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelStringFormat->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelStringFormat\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelStringFormat->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelStringFormat(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const char* const val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelStringFormat->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelStringFormat\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelStringFormat->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelStringFormat& _e =
    this->tlmHistory_ChannelStringFormat->at(__index);
  ASSERT_EQ(val, _e.arg.toChar())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelStringFormat\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelEnum_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelEnum->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelEnum\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelEnum->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelEnum(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const E& val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelEnum->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelEnum\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelEnum->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelEnum& _e =
    this->tlmHistory_ChannelEnum->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelEnum\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelArrayFreq_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelArrayFreq->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelArrayFreq\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelArrayFreq->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelArrayFreq(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const A& val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelArrayFreq->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelArrayFreq\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelArrayFreq->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelArrayFreq& _e =
    this->tlmHistory_ChannelArrayFreq->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelArrayFreq\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelStructFreq_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelStructFreq->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelStructFreq\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelStructFreq->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelStructFreq(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const S& val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelStructFreq->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelStructFreq\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelStructFreq->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelStructFreq& _e =
    this->tlmHistory_ChannelStructFreq->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelStructFreq\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelU32Limits_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelU32Limits->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelU32Limits\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelU32Limits->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelU32Limits(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const U32 val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelU32Limits->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelU32Limits\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelU32Limits->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelU32Limits& _e =
    this->tlmHistory_ChannelU32Limits->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelU32Limits\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelF32Limits_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelF32Limits->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelF32Limits\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelF32Limits->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelF32Limits(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const F32 val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelF32Limits->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelF32Limits\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelF32Limits->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelF32Limits& _e =
    this->tlmHistory_ChannelF32Limits->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelF32Limits\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelF64_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelF64->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelF64\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelF64->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelF64(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const F64 val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelF64->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelF64\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelF64->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelF64& _e =
    this->tlmHistory_ChannelF64->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelF64\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelU32OnChange_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelU32OnChange->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelU32OnChange\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelU32OnChange->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelU32OnChange(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const U32 val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelU32OnChange->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelU32OnChange\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelU32OnChange->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelU32OnChange& _e =
    this->tlmHistory_ChannelU32OnChange->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelU32OnChange\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelEnumOnChange_size(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 size
  ) const
{
  ASSERT_EQ(this->tlmHistory_ChannelEnumOnChange->size(), size)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Size of history for telemetry channel ChannelEnumOnChange\n"
    << "  Expected: " << size << "\n"
    << "  Actual:   " << this->tlmHistory_ChannelEnumOnChange->size() << "\n";
}

void QueuedTelemetryGTestBase ::
  assertTlm_ChannelEnumOnChange(
      const char* const __callSiteFileName,
      const U32 __callSiteLineNumber,
      const U32 __index,
      const E& val
  ) const
{
  ASSERT_LT(__index, this->tlmHistory_ChannelEnumOnChange->size())
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Index into history of telemetry channel ChannelEnumOnChange\n"
    << "  Expected: Less than size of history ("
    << this->tlmHistory_ChannelEnumOnChange->size() << ")\n"
    << "  Actual:   " << __index << "\n";
  const TlmEntry_ChannelEnumOnChange& _e =
    this->tlmHistory_ChannelEnumOnChange->at(__index);
  ASSERT_EQ(val, _e.arg)
    << "\n"
    << __callSiteFileName << ":" << __callSiteLineNumber << "\n"
    << "  Value:    Value at index "
    << __index
    << " on telemetry channel ChannelEnumOnChange\n"
    << "  Expected: " << val << "\n"
    << "  Actual:   " << _e.arg << "\n";
}