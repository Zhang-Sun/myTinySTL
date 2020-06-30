//
// Created by new on 2020/5/30.
//

#ifndef UNTITLED_EXCEPTDEF_H
#define UNTITLED_EXCEPTDEF_H

#include<cassert>
#include<stdexcept>

namespace mystl
{
#define MYSTL_DEBUG(expr) \
assert(expr)
    
#define THROW_LENGTH_ERROR_IF(expr, what) \
if((expr)) throw std::length_error(what)
    
#define THROW_OUT_OF_RANGE_IF(expr, what) \
if((expr)) throw std::out_of_range(what)
    
#define THROW_RUNTIME_ERROR_IF(expr, what) \
if((expr)) throw std::runtime_error(what)
} namespace mystl
#endif //UNTITLED_EXCEPTDEF_H
