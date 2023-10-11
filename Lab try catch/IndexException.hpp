//
//  IndexException.hpp
//  Lab try catch
//
//  Created by Michalis on 11.10.2023.
//

//#ifndef IndexException_hpp
//#define IndexException_hpp
#pragma once
#include <stdio.h>

//#endif /* IndexException_hpp */
#include "Exception.hpp"

class IndexException: public Exception
{
public:
    IndexException(const char* mes);
    virtual const char* GetMessage() const;
};
