//
// Created by pc on 6/22/2018.
//

#ifndef INTEPRETER_DESIGNPATTERN_PLUS_H
#define INTEPRETER_DESIGNPATTERN_PLUS_H


#include "Types.h"

class Plus : public Expression
{
protected:
    Expression* leftOperand;
    Expression* rightOperand;
public:
    Plus(Expression *leftOperand, Expression *rightOperand);
    virtual ~Plus();
    int intepret(Map variable) override;

};


#endif //INTEPRETER_DESIGNPATTERN_PLUS_H
