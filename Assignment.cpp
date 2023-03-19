#include "TP1.hpp"

Assignment::Assignment(){}

Assignment::Assignment(string name)
{
    this->name = name;
}

Assignment::~Assignment(){}

string Assignment::getName()
{
    return this->name;
}

bool Assignment::getIsOverdue()
{
    return this->isOverdue;
}

void Assignment::setName(string name)
{
    this->name = name;
}

void Assignment::setIsOverdue(bool isOverdue)
{
    this->isOverdue = isOverdue;
}