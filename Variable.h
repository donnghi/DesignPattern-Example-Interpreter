//
// Created by pc on 6/22/2018.
//

#ifndef INTEPRETER_DESIGNPATTERN_VARIABLE_H
#define INTEPRETER_DESIGNPATTERN_VARIABLE_H


#include "Types.h"

class Variable : public Expression
{
protected:
    String name;
public:
    Variable(const String &name);

    int intepret(Map variable) override;
};


#endif //INTEPRETER_DESIGNPATTERN_VARIABLE_H
