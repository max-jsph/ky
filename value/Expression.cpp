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

Expression Expression::minus(Expression other) {
    return infix(Operator::MINUS, other);
}

Expression Expression::times(Expression other) {
    return infix(Operator::TIMES, other);
}

Expression Expression::divide(Expression other) {
    return infix(Operator::DIVIDE, other);
}

Expression Expression::mod(Expression other) {
    return infix(Operator::MOD, other);
}

Expression Expression::unary_plus(Expression other) {
    return prefix(Operator::PLUS, other);
}

Expression Expression::unary_minus(Expression other) {
    return prefix(Operator::MINUS, other);
}

Expression Expression::length_of(Expression other) {
    return prefix(Operator::LENGTH_OF, other);
}
