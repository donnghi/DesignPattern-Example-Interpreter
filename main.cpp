#include <iostream>
#include "Evaluator.h"
#include "Number.h"

int main() {
    Evaluator sentence("w x z - +");
    const int sequences[][3] = {{5, 10, 42},{1,3,2},{7,9,-5}};
    for (size_t i = 0; sizeof(sequences)/sizeof(sequences[0]) > i; ++i) {
        Map variables;
        variables["w"] = new Number(sequences[i][0]);
        variables["x"] = new Number(sequences[i][1]);
        variables["z"] = new Number(sequences[i][2]);
        int result = sentence.intepret(variables);
        for (Map::iterator it = variables.begin(); variables.end() != it; ++it) delete it->second;

        std::cout<<"Interpreter result: "<<result<<std::endl;
    }
    return 0;
}