cmake_minimum_required(VERSION 3.9)
project(Intepreter_DesignPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(Intepreter_DesignPattern main.cpp Types.h IExpression.h Number.cpp Number.h Plus.cpp Plus.h Minus.cpp Minus.h Variable.cpp Variable.h Evaluator.cpp Evaluator.h)