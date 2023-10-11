#include <string.h>

#include "Exception.hpp"

Exception::Exception(const char* message)
{
    strcpy(m_message, message);
}

const char* Exception::GetMessage() const
{
    return m_message;
}
