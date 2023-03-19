#include "TP1.hpp"

CollegeStudent::CollegeStudent(){}

CollegeStudent::CollegeStudent(string nik, string name, Gender gender, int energy, string nim, vector<string> textbooks, string laptop)
{
    this->nik = nik;
    this->name = name;
    this->gender = gender;
    this->energy = energy;

    this->nim = nim;
    this->textbooks = textbooks;
    this->laptop = laptop;
}

CollegeStudent::~CollegeStudent(){}

string CollegeStudent::getNIM()
{
    return this->nim;
}

vector<string> CollegeStudent::getTextbooks()
{
    return this->textbooks;
}

string CollegeStudent::getLaptop()
{
    return this->laptop;
}

vector<Assignment> CollegeStudent::getAssignments()
{
    return this->assignments;
}

void CollegeStudent::setNIM(string nim)
{
    this->nim = nim;
}

void CollegeStudent::setTextbooks(vector<string> textbooks)
{
    this->textbooks = textbooks;
}

void CollegeStudent::setLaptop(string laptop)
{
    this->laptop = laptop;
}

void CollegeStudent::setAssignments(vector<Assignment> assignments)
{
    this->assignments = assignments;
}

void CollegeStudent::addTextbook(string textbook)
{
    this->textbooks.push_back(textbook);
}

void CollegeStudent::addAssignment(Assignment assignment)
{
    this->assignments.push_back(assignment);
}

void CollegeStudent::study(string subject, int energyLoss)
{
    this->activity("study", "studied", subject, energyLoss, "");
}

void CollegeStudent::attendClass(string className, int energyLoss)
{
    this->activity("attend", "attended", className, energyLoss, "class");
}

void CollegeStudent::workOnAssignment(Assignment assignment, int energyLoss)
{
    this->activity("work on", "worked on", assignment.getName(), energyLoss, "assignment");
}