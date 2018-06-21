//
// Created by pc on 6/22/2018.
//

#ifndef INTEPRETER_DESIGNPATTERN_IEXPRESSION_H
#define INTEPRETER_DESIGNPATTERN_IEXPRESSION_H

#include "Types.h"

typedef std::string String;
class Expression;

typedef std::map<String, Expression*> Map;

class Expression
{
public:
    virtual ~Expression(){};
    virtual int intepret(Map) = 0;
};

#endif //INTEPRETER_DESIGNPATTERN_IEXPRESSION_H
