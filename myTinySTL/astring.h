// 定义了string， wstring， u16string， u32string类型
// Created by new on 2020/7/19.
//

#ifndef UNTITLED_ASTRING_H
#define UNTITLED_ASTRING_H

#include "basic_string.h"

namespace mystl
{
    using string = mystl::basic_string<char>;
    using wstring = mystl::basic_string<wchar_t>;
    using u16string = mystl::basic_string<char16_t>;
    using u32string = mystl::basic_string<char32_t>;
}
#endif //UNTITLED_ASTRING_H
