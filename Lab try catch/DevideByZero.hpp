#pragma once
#include "Exception.hpp"

class DivideByZero: public Exception
{
public:
    DivideByZero(const char* mes);
    virtual const char* GetMessage() const;
};

