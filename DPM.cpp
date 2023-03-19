#include "TP1.hpp"

DPM::DPM(){}

DPM::DPM(string nik, string name, Gender gender, int energy, string nim, vector<string> textbooks, string laptop, string position)
{
    this->nik = nik;
    this->name = name;
    this->gender = gender;
    this->energy = energy;

    this->nim = nim;
    this->textbooks = textbooks;
    this->laptop = laptop;

    this->position = position;
}

DPM::~DPM(){}

string DPM::getPosition()
{
    return this->position;
}

void DPM::setPosition(string position)
{
    this->position = position;
}

void DPM::appreciate(Program program, int energyLoss)
{
    if (program.getIsDone())
    {
        if (this->activity("appreciate", "appreciated", "BEM's", energyLoss, "program"))
        {
            cout << this->name << " : \"I appreciate your work\"" << endl << endl;
        }
    }
    else
    {
        cout << "The BEM has not finished this program just yet" << endl << endl;
    }
}