//
// Created by pc on 6/22/2018.
//

#include "Variable.h"

Variable::Variable(const String &name) : name(name) {}

int Variable::intepret(Map variable)
{
    return (variable.find(name)==variable.end())?0:variable[name]->intepret(variable);
}
