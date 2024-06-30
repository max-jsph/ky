//
// Created by Ky Dicker on 30/06/2024.
//

#include "Expression.h"

#include "Operator.h"

Value Expression::solve() {

}

Expression::Expression(initializer_list<Element> expressions) {
    for (const auto& e : expressions) {
        values.push_back(e);
    }
}


Expression Expression::infix(int op, Expression other) {
    auto o = Operator(op);

    auto exp = Expression({*this, o, other});

    return exp;
}

Expression Expression::prefix(int op, Expression other) {
    auto o = Operator(op);

    auto exp = Expression({o, *this});

    return exp;
}



Expression Expression::plus(Expression other) {
    return infix(Operator::PLUS, other);
}

Expression Expression::minus(Expression ohter) {
    auto op = Operator(Operator::MINUS);

    values.push_back(op);
    values.push_back(ohter);
}

Expression Expression::times(Expression ohter) {
    auto op = Operator(Operator::TIMES);

    values.push_back(op);
    values.push_back(ohter);
}

Expression Expression::divide(Expression ohter) {
    auto op = Operator(Operator::DIVIDE);

    values.push_back(op);
    values.push_back(ohter);
}

Expression Expression::mod(Expression ohter) {
    auto op = Operator(Operator::MOD);

    values.push_back(op);
    values.push_back(ohter);
}

Expression Expression::unary_plus(Expression ohter) {
    auto op = Operator(Operator::UNARY_PLUS);

    values.push_back(op);
    values.push_back(ohter);
}

Expression Expression::unary_minus(Expression ohter) {
    auto op = Operator(Operator::UNARY_MINUS);

    values.push_back(op);
    values.push_back(ohter);
}