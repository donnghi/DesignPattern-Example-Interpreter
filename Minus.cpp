//
// Created by pc on 6/22/2018.
//

#include "Minus.h"

Minus::Minus(Expression *leftOperand, Expression *rightOperand) : leftOperand(leftOperand),
                                                                  rightOperand(rightOperand) {}

Minus::~Minus()
{
    if (leftOperand!= nullptr) delete leftOperand;
    if (rightOperand!= nullptr)delete rightOperand;
}

int Minus::intepret(Map variable)
{
    return leftOperand->intepret(variable)-rightOperand->intepret(variable);
}
