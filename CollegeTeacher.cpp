#include "TP1.hpp"

CollegeTeacher::CollegeTeacher(){}

CollegeTeacher::CollegeTeacher(string nik, string name, Gender gender, int energy, vector<string> subjects, vector<CollegeStudent> students, string nip, vector<string> markers, string laptop)
{
    this->nik = nik;
    this->name = name;
    this->gender = gender;
    this->energy = energy;

    this->subjects = subjects;
    this->students = students;

    this->nip = nip;
    this->markers = markers;
    this->laptop = laptop;
}

CollegeTeacher::~CollegeTeacher(){}

string CollegeTeacher::getNIP()
{
    return this->nip;
}

vector<string> CollegeTeacher::getMarkers()
{
    return this->markers;
}

string CollegeTeacher::getLaptop()
{
    return this->laptop;
}

void CollegeTeacher::setNIP(string nip)
{
    this->nip = nip;
}

void CollegeTeacher::setMarkers(vector<string> markers)
{
    this->markers = markers;
}

void CollegeTeacher::setLaptop(string laptop)
{
    this->laptop = laptop;
}

void CollegeTeacher::addMarker(string marker)
{
    this->markers.push_back(marker);
}

void CollegeTeacher::giveScores(int energyLoss)
{
    bool isAssignmentGiven = false;
    for (CollegeStudent cs : this->students)
    {
        cout << cs.getAssignments().size() << endl;
        if (cs.getAssignments().size() > 0)
        {
            cout << "valid" << endl;
            isAssignmentGiven = true;
        }
    }
    if (isAssignmentGiven)
    {
        this->activity("give", "gave", "all the students", energyLoss, "their score");
    }
    else
    {
        cout << this->name << " could not give any scores because the Assistants have not given any assignments just yet" << endl << endl;
    }
}