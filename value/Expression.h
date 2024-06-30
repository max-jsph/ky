//
// Created by Ky Dicker on 30/06/2024.
//

#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "any"
#include "Call.h"
#include "Value.h"
#include "vector"
#include "../types/Type.h"

using namespace std;

class Expression : public Element {
    protected:
    vector<Element> values;

    private:
    Expression infix(int op, Expression other);
    Expression prefix(int op, Expression other);

    protected:
    explicit Expression(initializer_list<Element> expressions);

    public:
    explicit Expression(Value value);

    explicit Expression(Call call);

    Value solve();

    Expression plus(Expression ohter);

    Expression minus(Expression ohter);

    Expression times(Expression ohter);

    Expression divide(Expression ohter);

    Expression mod(Expression ohter);

    Expression length_of(Expression ohter);

    Expression unary_plus(Expression ohter);

    Expression unary_minus(Expression ohter);

    Expression inc(Expression ohter);

    Expression dec(Expression ohter);
};


#endif //EXPRESSION_H
