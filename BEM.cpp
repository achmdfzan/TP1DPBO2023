#include "TP1.hpp"

BEM::BEM(){}

BEM::BEM(string nik, string name, Gender gender, int energy, string nim, vector<string> textbooks, string laptop, string position, vector<Program> programs, vector<string> innovations)
{
    this->nik = nik;
    this->name = name;
    this->gender = gender;
    this->energy = energy;

    this->nim = nim;
    this->textbooks = textbooks;
    this->laptop = laptop;

    this->position = position;
    this->programs = programs;
    this->innovations = innovations;
}

BEM::~BEM(){}

string BEM::getPosition()
{
    return this->position;
}

vector<Program> BEM::getPrograms()
{
    return this->programs;
}

vector<string> BEM::getInnovations()
{
    return this->innovations;
}

void BEM::setPosition(string position)
{
    this->position = position;
}

void BEM::setPrograms(vector<Program> programs)
{
    this->programs = programs;
}

void BEM::setInnovations(vector<string> innovations)
{
    this->innovations = innovations;
}

void BEM::addProgram(Program program)
{
    this->programs.push_back(program);
}

void BEM::addInnovation(string innovation)
{
    this->innovations.push_back(innovation);
}

void BEM::doProgram(Program program, int energyLoss, DPM dpm)
{
    if (this->activity("do", "did", program.getName(), energyLoss, "program"))
    {
        program.setIsDone(true);
        dpm.appreciate(program, energyLoss / 10);
    }
}

void BEM::planInnovation(string innovation, int energyLoss)
{
    if (this->activity("plan", "planned", innovation, energyLoss, "innovation"))
    {
        this->innovations.push_back(innovation);
    }
}

void BEM::workOnInnovation(string innovation, int energyLoss)
{
    this->activity("work on", "worked on", innovation, energyLoss, "innovation");
}