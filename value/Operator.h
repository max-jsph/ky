//
// Created by Ky Dicker on 30/06/2024.
//

#ifndef OPERATOR_H
#define OPERATOR_H
#include <cstddef>

#include "Element.h"


class Operator: public Element{
    protected:
    int value;

    public:
    explicit Operator(int v);

    public:
    static int PLUS;
    static int MINUS;
    static int TIMES;
    static int DIVIDE;
    static int MOD;
    static int UNARY_PLUS;
    static int UNARY_MINUS;

    static int EQ;
    static int LT;
    static int GT;
    static int LE;
    static int GE;
    static int NOT;
    static int NEQ;

    static int LENGTH_OF;
};



#endif //OPERATOR_H
