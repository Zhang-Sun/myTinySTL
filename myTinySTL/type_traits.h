// 提取类型信息的头文件
// Created by Zhang-Sun on 2020/5/5.
//

#ifndef UNTITLED_TYPE_TRAITS_H
#define UNTITLED_TYPE_TRAITS_H

//use standard header
#include<type_traits>

namespace mystl
{
    
//  helper struct

template<class T, T v>
struct m_intergral_constant
{
    static constexpr T value = v;
};

template<bool b>
using m_bool_constant = m_intergral_constant<bool, b>;

typedef m_bool_constant<true> m_true_type;
typedef m_bool_constant <false> m_false_type;

/*************************************************************************/
//type traints

//is_pair

//-- forward declaration begin 
template<class T1, class T2>
struct pair;
// -- forward declaration end

template <class T>
struct is_pair : mystl::m_false_type {};

template<class T1, class T2>
struct is_pair<mystl::pair<T1, T2>> : mystl::m_true_type {};



}//namespace mystl



#endif //UNTITLED_TYPE_TRAITS_H
