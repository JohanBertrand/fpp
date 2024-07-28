// ======================================================================
// \title  Modules1SerializableAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Modules1 struct
// ======================================================================

#include "Fw/Types/Assert.hpp"
#include "Modules1SerializableAc.hpp"

namespace M {

  // ----------------------------------------------------------------------
  // Constructors
  // ----------------------------------------------------------------------

  Modules1 ::
    Modules1() :
      Serializable(),
      m_x(0),
      m_y(0.0f)
  {

  }

  Modules1 ::
    Modules1(
        U32 x,
        F32 y
    ) :
      Serializable(),
      m_x(x),
      m_y(y)
  {

  }

  Modules1 ::
    Modules1(const Modules1& obj) :
      Serializable(),
      m_x(obj.m_x),
      m_y(obj.m_y)
  {

  }

  // ----------------------------------------------------------------------
  // Operators
  // ----------------------------------------------------------------------

  Modules1& Modules1 ::
    operator=(const Modules1& obj)
  {
    if (this == &obj) {
      return *this;
    }

    set(obj.m_x, obj.m_y);
    return *this;
  }

  bool Modules1 ::
    operator==(const Modules1& obj) const
  {
    return (
      (this->m_x == obj.m_x) &&
      (this->m_y == obj.m_y)
    );
  }

  bool Modules1 ::
    operator!=(const Modules1& obj) const
  {
    return !(*this == obj);
  }

#ifdef BUILD_UT

  std::ostream& operator<<(std::ostream& os, const Modules1& obj) {
    Fw::String s;
    obj.toString(s);
    os << s.toChar();
    return os;
  }

#endif

  // ----------------------------------------------------------------------
  // Member functions
  // ----------------------------------------------------------------------

  Fw::SerializeStatus Modules1 ::
    serialize(Fw::SerializeBufferBase& buffer) const
  {
    Fw::SerializeStatus status;

    status = buffer.serialize(this->m_x);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }
    status = buffer.serialize(this->m_y);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }

    return status;
  }

  Fw::SerializeStatus Modules1 ::
    deserialize(Fw::SerializeBufferBase& buffer)
  {
    Fw::SerializeStatus status;

    status = buffer.deserialize(this->m_x);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }
    status = buffer.deserialize(this->m_y);
    if (status != Fw::FW_SERIALIZE_OK) {
      return status;
    }

    return status;
  }

#if FW_SERIALIZABLE_TO_STRING

  void Modules1 ::
    toString(Fw::StringBase& sb) const
  {
    static const char* formatString =
      "( "
      "x = %" PRIu32 ", "
      "y = %f"
      " )";

    sb.format(
      formatString,
      this->m_x,
      (double)(this->m_y)
    );
  }

#endif

  // ----------------------------------------------------------------------
  // Setter functions
  // ----------------------------------------------------------------------

  void Modules1 ::
    set(
        U32 x,
        F32 y
    )
  {
    this->m_x = x;
    this->m_y = y;
  }

  void Modules1 ::
    setx(U32 x)
  {
    this->m_x = x;
  }

  void Modules1 ::
    sety(F32 y)
  {
    this->m_y = y;
  }

}
