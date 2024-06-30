//
// Created by Ky Dicker on 30/06/2024.
//

#ifndef VALUE_H
#define VALUE_H
#include <any>

#include "Element.h"
#include "../types/Type.h"

using namespace std;

class Value: public Element{
    protected:
    any value;
    Type type;

    public:
    Value(any v, Type t);

    any get_value();

    Type get_type();
};


#endif //VALUE_H
