//
// Created by Ky Dicker on 30/06/2024.
//

#ifndef CALL_H
#define CALL_H
#include "Element.h"
#include "Expression.h"
#include "vector"

using namespace std;

class Call: public Element{
    long ref;
    optional<Expression> receiver;
    vector<Expression> args;
};



#endif //CALL_H
