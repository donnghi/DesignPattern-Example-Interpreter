//
// Created by pc on 6/22/2018.
//

#ifndef INTEPRETER_DESIGNPATTERN_MINUS_H
#define INTEPRETER_DESIGNPATTERN_MINUS_H


#include "Types.h"

class Minus : public Expression
{
protected:
    Expression* leftOperand;
    Expression* rightOperand;
public:
    virtual ~Minus();

    Minus(Expression *leftOperand, Expression *rightOperand);

    int intepret(Map variable) override;

};


#endif //INTEPRETER_DESIGNPATTERN_MINUS_H
