//
// Created by pc on 6/22/2018.
//

#ifndef INTEPRETER_DESIGNPATTERN_NUMBER_H
#define INTEPRETER_DESIGNPATTERN_NUMBER_H


#include "Types.h"

class Number : public Expression
{
protected:
    int number;
public:
    Number();
    Number(int number);

    int intepret(Map variable) override;

};


#endif //INTEPRETER_DESIGNPATTERN_NUMBER_H
