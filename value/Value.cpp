//
// Created by Ky Dicker on 30/06/2024.
//

#include "Value.h"

Value::Value(Any v, TypeSpec t): value(v), type(t) {}

Any Value::get_value() {
    return value;
}


TypeSpec Value::get_type_spec() {
    return type;
}

boolean_t Value::is_null() {
    return value.hash_code() == 0;
}


