#include "TP1.hpp"

Assistant::Assistant(){}

Assistant::Assistant(string nik, string name, Gender gender, int energy, string nim, vector<string> textbooks, string laptop, vector<string> subjects, vector<CollegeStudent> students, CollegeTeacher CollegeTeacher)
{
    this->nik = nik;
    this->name = name;
    this->gender = gender;
    this->energy = energy;

    this->nim = nim;
    this->textbooks = textbooks;
    this->laptop = laptop;

    this->subjects = subjects;
    this->students = students;
}

Assistant::~Assistant(){}

CollegeTeacher Assistant::getCollegeTeacher()
{
    return this->collegeTeacher;
}

void Assistant::setCollegeTeacher(CollegeTeacher collegeTeacher)
{
    this->collegeTeacher = collegeTeacher;
}