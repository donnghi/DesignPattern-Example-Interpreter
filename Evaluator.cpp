//
// Created by pc on 6/22/2018.
//

#include "Evaluator.h"
#include "Variable.h"
#include "Minus.h"
#include "Plus.h"

Evaluator::Evaluator(Expression *syntaxTree) : syntaxTree(syntaxTree) {}

Evaluator::Evaluator(String expression)
{
    Stack expressionStack;
    size_t last = 0;
    for (size_t next = 0; String::npos != last; last = (String::npos == next) ? next : (1+next)) {
        next = expression.find(' ', last);
        String token( expression.substr(last, (String::npos == next) ? (expression.length()-last) : (next-last)));

        if  (token == "+") {
            Expression* right = expressionStack.back(); expressionStack.pop_back();
            Expression* left = expressionStack.back(); expressionStack.pop_back();
            Expression* subExpression = new Plus(right, left);
            expressionStack.push_back( subExpression );
        }
        else if (token == "-") {
            // it's necessary remove first the right operand from the stack
            Expression* right = expressionStack.back(); expressionStack.pop_back();
            // ..and after the left one
            Expression* left = expressionStack.back(); expressionStack.pop_back();
            Expression* subExpression = new Minus(left, right);
            expressionStack.push_back( subExpression );
        }
        else
            expressionStack.push_back( new Variable(token) );
    }

    syntaxTree = expressionStack.back(); expressionStack.pop_back();
}

Evaluator::~Evaluator()
{
    if (syntaxTree!= nullptr) delete syntaxTree;
}

int Evaluator::intepret(Map context) {
    return syntaxTree->intepret(context);
}
