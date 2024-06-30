//
// Created by Ky Dicker on 30/06/2024.
//

#ifndef TYPE_H
#define TYPE_H

#include <cstdint>
#include "string"

using namespace std;

typedef int8_t byte_t;
typedef int16_t short_t;
typedef int32_t int_t;
typedef int64_t long_t;

typedef u_int8_t u_byte_t;
typedef u_int16_t u_short_t;
typedef u_int32_t u_int_t;
typedef u_int64_t u_long_t;

typedef float float_t;
typedef double double_t;

typedef bool boolean_t;
typedef char32_t char_t;

typedef string string_t;

enum class Type {
    BYTE,
    SHORT,
    INT,
    LONG,

    U_BYTE,
    U_SHORT,
    U_INT,
    U_LONG,

    FLOAT,
    DOUBLE,

    CHAR,
    STRING,

    BOOLEAN,

    K_FUNCTION,
    K_BUNDLE,
    K_TYPE,
    K_VARIABLE
};

#endif //TYPE_H
