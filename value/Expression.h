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

    Expression plus(Expression other);

    Expression minus(Expression other);

    Expression times(Expression other);

    Expression divide(Expression other);

    Expression mod(Expression other);

    Expression length_of(Expression other);

    Expression unary_plus(Expression other);

    Expression unary_minus(Expression other);
};


#endif //EXPRESSION_H
