#include "DevideByZero.hpp"

DivideByZero::DivideByZero(const char* mes):Exception(mes)
{
}

const char* DivideByZero::GetMessage() const
{
    return m_message;
}
