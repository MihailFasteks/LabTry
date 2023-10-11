//
//  ArrayValueCalc.hpp
//  Lab try catch
//
//  Created by Michalis on 10.10.2023.
//

//#ifndef ArrayValueCalc_hpp
//#define ArrayValueCalc_hpp
#pragma once
#include "Exception.hpp"
#include <stdio.h>

//#endif /* ArrayValueCalc_hpp */
class ArrayValueCalculator: public Exception
{
public:
   void doCalc(const char* mes);
    virtual const char* GetMessage() const;
};
