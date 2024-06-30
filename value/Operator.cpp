//
// Created by Ky Dicker on 30/06/2024.
//

#include "Operator.h"

Operator::Operator(int v): value(v) {}


int Operator::PLUS = 1;
int Operator::MINUS = 2;
int Operator::TIMES = 3;
int Operator::DIVIDE = 4;
int Operator::MOD = 5;

int Operator::UNARY_PLUS = 6;
int Operator::UNARY_MINUS = 7;

int Operator::EQ = 8;
int Operator::LT = 9;
int Operator::GT = 10;
int Operator::LE = 11;
int Operator::GE = 12;
int Operator::NOT = 13;
int Operator::NEQ = 14;

int Operator::LENGTH_OF = 1;
