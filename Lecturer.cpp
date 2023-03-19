#include "TP1.hpp"

Lecturer::Lecturer(){}

Lecturer::Lecturer(string nik, string name, Gender gender, int energy, vector<string> subjects, vector<CollegeStudent> students)
{
    this->nik = nik;
    this->name = name;
    this->gender = gender;
    this->energy = energy;

    this->subjects = subjects;
    this->students = students;
}

Lecturer::~Lecturer(){}

vector<string> Lecturer::getSubjects()
{
    return this->subjects;
}

vector<CollegeStudent> Lecturer::getStudents()
{
    return this->students;
}

void Lecturer::setSubjects(vector<string> subjects)
{
    this->subjects = subjects;
}

void Lecturer::setStudents(vector<CollegeStudent> students)
{
    this->students = students;
}

void Lecturer::addSubject(string subject)
{
    this->subjects.push_back(subject);
}

void Lecturer::addStudent(CollegeStudent student)
{
    this->students.push_back(student);
}

void Lecturer::teach(string subject, int energyLoss)
{
    this->activity("teach", "taught", subject, energyLoss, "subject");
}

void Lecturer::giveAssignment(Assignment assignment, int energyLoss)
{
    if (this->activity("give", "gave", assignment.getName(), energyLoss, "assignment"))
    {
        for (CollegeStudent cs : this->students)
        {
            cs.addAssignment(assignment);
        }
    }
}