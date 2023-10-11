//
//  IndexException.cpp
//  Lab try catch
//
//  Created by Michalis on 11.10.2023.
//

#include "IndexException.hpp"
IndexException::IndexException(const char* mes):Exception(mes)
{
}
const char* IndexException::GetMessage() const
{
    return m_message;
}

