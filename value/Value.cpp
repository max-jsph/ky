//
// Created by Ky Dicker on 30/06/2024.
//

#include "Value.h"

Value::Value(any v, Type t): value(v), type(t) {}

any Value::get_value() {
    return value;
}


Type Value::get_type() {
    return type;
}

