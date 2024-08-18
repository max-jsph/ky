//
// Created by Ky Dicker on 03/07/2024.
//

#ifndef VARIABLE_H
#define VARIABLE_H
#include "../Element.h"
#include "../NamedElement.h"
#include "../../value/Expression.h"


class Variable: public NamedElement{
    protected:
    Expression value;
    boolean_t is_val;
    boolean_t is_initialized;

    public:
    Variable(string_t name, Expression value, boolean_t is_val = true);
};



#endif //VARIABLE_H
