//
// Created by Ky Dicker on 18/08/2024.
//

#ifndef TYPESTACK_H
#define TYPESTACK_H

#include<vector>
#include"Type.h"

using namespace std;

class TypeSpec {
    vector<Type> stack;

    explicit TypeSpec(vector<Type> types);

    public:
    static TypeSpec of_value(Type type);
    static TypeSpec of_array(Type type);
    static TypeSpec of_pair(Type first_type, Type second_type);
    static TypeSpec of_map(Type key_type, Type value_type);

    bool is_value();

    bool is_array();

    bool is_pair();

    bool is_map();

    bool to_string();
};


#endif //TYPESTACK_H
