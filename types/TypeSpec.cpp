//
// Created by Ky Dicker on 18/08/2024.
//

#include "TypeSpec.h"

TypeSpec::TypeSpec(vector<Type> types): stack(std::move(types)) {}

TypeSpec TypeSpec::of_value(Type type) {
    return TypeSpec({type});
}

TypeSpec TypeSpec::of_array(Type type) {
    return TypeSpec({Type::ARRAY, type});
}

TypeSpec TypeSpec::of_pair(Type first_type, Type second_type) {
    return TypeSpec({Type::PAIR, first_type, second_type});
}


TypeSpec TypeSpec::of_map(Type key_type, Type value_type) {
    return TypeSpec({Type::MAP, key_type, value_type});
}

bool TypeSpec::is_value() {
    return !is_array() && !is_map();
}

bool TypeSpec::is_array() {
    return stack[0] == Type::ARRAY;
}

bool TypeSpec::is_pair() {
    return stack[0] == Type::PAIR;
}

bool TypeSpec::is_map() {
    return stack[0] == Type::MAP;
}

bool TypeSpec::to_string() {
    return "TypeStack<*>";
}






