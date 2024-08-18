//
// Created by Ky Dicker on 30/06/2024.
//

#ifndef VALUE_H
#define VALUE_H

#include "Element.h"
#include "../types/Any.h"
#include "../types/Type.h"
#include "../types/TypeSpec.h"

using namespace std;

class Value: public Element{
    protected:
    Any value = null;
    TypeSpec type;

    public:
    Value(Any v, TypeSpec t);

    Any get_value();

    TypeSpec get_type_spec();

    boolean_t is_null();
};


#endif //VALUE_H
