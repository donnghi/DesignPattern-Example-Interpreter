//
// Created by pc on 6/22/2018.
//

#include "Number.h"

Number::Number(int number) : number(number) {}

Number::Number() : number(0) {}

int Number::intepret(Map variable)
{
    return this->number;
}
