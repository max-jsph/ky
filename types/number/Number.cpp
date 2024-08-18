//
// Created by Ky Dicker on 30/06/2024.
//

#include "Number.h"

#include "Int.h"

template<class T>
long_t Number<T>::hash_code() {
}

template<class T>
string_t Number<T>::to_string() {
    if (is_same_v<T, byte_t>) {
        return this->to_byte().to_string();
    } else if (is_same_v<T, short_t>) {
        return this->to_short().to_string();
    } else if (is_same_v<T, int_t>) {
        return this->to_int().to_string();
    } else if (is_same_v<T, long_t>) {
        return this->to_long().to_string();
    } else if (is_same_v<T, u_byte_t>) {
        return this->to_u_byte().to_string();
    } else if (is_same_v<T, u_short_t>) {
        return this->to_u_short().to_string();
    } else if (is_same_v<T, u_int_t>) {
        return this->to_u_int().to_string();
    } else if (is_same_v<T, u_long_t>) {
        return this->to_u_long().to_string();
    } else if (is_same_v<T, float_t>) {
        return this->to_float().to_string();
    } else if (is_same_v<T, double_t>) {
        return this->to_double().to_string();
    }
}
