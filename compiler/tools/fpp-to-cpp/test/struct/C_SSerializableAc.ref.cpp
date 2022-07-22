// ======================================================================
// \title  C_SSerializableAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for C_S struct
// ======================================================================

#include "cstdio"
#include "cstring"

#include "C_SSerializableAc.hpp"
#include "Fw/Types/Assert.hpp"
#include "Fw/Types/StringUtils.hpp"

// ----------------------------------------------------------------------
// Constructors
// ----------------------------------------------------------------------

C_S ::
  C_S() :
    Serializable(),
    x(0)
{

}

C_S ::
  C_S(U32 x) :
    Serializable(),
    x(x)
{

}

C_S ::
  C_S(const C_S& obj) :
    Serializable(),
    x(obj.x)
{

}

// ----------------------------------------------------------------------
// Operators
// ----------------------------------------------------------------------

C_S& C_S ::
  operator=(const C_S& obj)
{
  if (this == &obj) {
    return *this;
  }

  set(obj.x);
  return *this;
}

bool C_S ::
  operator==(const C_S& obj) const
{
  return (this->x == obj.x);
}

bool C_S ::
  operator!=(const C_S& obj) const
{
  return !(*this == obj);
}

#ifdef BUILD_UT

std::ostream& operator<<(std::ostream& os, const C_S& obj) {
  Fw::String s;
  obj.toString(s);
  os << s.toChar();
  return os;
}

#endif

// ----------------------------------------------------------------------
// Member functions
// ----------------------------------------------------------------------

Fw::SerializeStatus C_S ::
  serialize(Fw::SerializeBufferBase& buffer) const
{
  Fw::SerializeStatus status;

  status = buffer.serialize(this->x);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }

  return status;
}

Fw::SerializeStatus C_S ::
  deserialize(Fw::SerializeBufferBase& buffer)
{
  Fw::SerializeStatus status;

  status = buffer.deserialize(this->x);
  if (status != Fw::FW_SERIALIZE_OK) {
    return status;
  }

  return status;
}

#if FW_SERIALIZABLE_TO_STRING || BUILD_UT

void C_S ::
  toString(Fw::StringBase& sb) const
{
  static const char* formatString =
    "( "
    "x = %" PRIu32 ""
    " )";

  char outputString[FW_SERIALIZABLE_TO_STRING_BUFFER_SIZE];
  (void) snprintf(
    outputString,
    FW_SERIALIZABLE_TO_STRING_BUFFER_SIZE,
    formatString,
    this->x
  );

  outputString[FW_SERIALIZABLE_TO_STRING_BUFFER_SIZE-1] = 0; // NULL terminate
  sb = outputString;
}

#endif

// ----------------------------------------------------------------------
// Getter functions
// ----------------------------------------------------------------------

U32 C_S ::
  getx() const
{
  return this->x;
}

// ----------------------------------------------------------------------
// Setter functions
// ----------------------------------------------------------------------

void C_S ::
  set(U32 x)
{
  this->x = x;
}

void C_S ::
  setx(U32 x)
{
  this->x = x;
}
