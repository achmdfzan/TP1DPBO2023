#include "TP1.hpp"

Program::Program(){}

Program::Program(string name)
{
    this->name = name;
}

Program::~Program(){}

string Program::getName()
{
    return this->name;
}

bool Program::getIsDone()
{
    return this->isDone;
}

void Program::setName(string name)
{
    this->name = name;
}

void Program::setIsDone(bool isDone)
{
    this->isDone = isDone;
}