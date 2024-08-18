//
// Created by Ky Dicker on 30/06/2024.
//

#include "Int.h"

Int::Int(int_t value): value(value) {}

int Int::get() {
    return value;
}


Int Int::to_int() {
    return Int(value);
}

string_t Int::to_string() {
    return "[Int " + std::to_string(value) + "]";
}
