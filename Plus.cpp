//
// Created by pc on 6/22/2018.
//

#include "Plus.h"

Plus::Plus(Expression *leftOperand, Expression *rightOperand) : leftOperand(leftOperand), rightOperand(rightOperand) {}

Plus::~Plus()
{
    if (leftOperand!= nullptr)  delete leftOperand;
    if (rightOperand!= nullptr) delete rightOperand;
}

int Plus::intepret(Map variable)
{
    return leftOperand->intepret(variable) + rightOperand->intepret(variable);
}
