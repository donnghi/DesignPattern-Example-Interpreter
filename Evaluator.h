//
// Created by pc on 6/22/2018.
//

#ifndef INTEPRETER_DESIGNPATTERN_EVALUATOR_H
#define INTEPRETER_DESIGNPATTERN_EVALUATOR_H


#include "Types.h"

class Evaluator : public Expression
{
protected:
    Expression* syntaxTree;
public:
    Evaluator(Expression *syntaxTree);
    Evaluator(String expression);

    virtual ~Evaluator();

    int intepret(Map context) override;
};


#endif //INTEPRETER_DESIGNPATTERN_EVALUATOR_H
