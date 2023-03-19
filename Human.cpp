#include "TP1.hpp"

Human::Human(){}

Human::Human(string nik, string name, Gender gender, int energy)
{
    this->nik = nik;
    this->name = name;
    this->gender = gender;
    this->energy = energy;
}

Human::~Human(){}

string Human::getNIK()
{
    return this->nik;
}

string Human::getName()
{
    return this->name;
}

char Human::getGender()
{
    return this->gender;
}

int Human::getEnergy()
{
    return this->energy;
}

void Human::setNIK(string nik)
{
    this->nik = nik;
}

void Human::setName(string name)
{
    this->name = name;
}

void Human::setGender(Gender gender)
{
    this->gender = gender;
}

void Human::setEnergy(int energy)
{
    this->energy = energy;
}

bool Human::activity(string verb1, string verb2, string object, int energy, string context)
{
    if (this->energy + energy >= 0)
    {
        cout << this->name << " " << verb2 << " " << object << " " << context << endl;
        cout << this->name << (energy > 0 ? " gained " : " loss ") << (energy > 0 ? energy : energy * -1) << " energies (" << this->energy << " -> ";
        this->energy += energy;
        cout << this->energy << ")" << endl << endl;
        return true;
    }
    else
    {
        cout << this->name << " didn't have enough energy to " << verb1 << " " << object << " " << context << endl << endl;
        return false;
    }
}

void Human::eat(string foodName, int energyGain)
{
    this->activity("eat", "ate", foodName, energyGain, "");
}

void Human::drink(string drinkName, int energyGain)
{
    this->activity("drink", "drank", drinkName, energyGain, "");
}

void Human::sleep(string durationInHours, int energyGain)
{
    this->activity("sleep for", "slept for", durationInHours, energyGain, "hours");
}