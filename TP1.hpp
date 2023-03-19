#include <bits/stdc++.h>

using namespace std;

enum Gender
{
    Male = 'M',
    Female = 'F'
};

class Program
{
    private:
        string name;
        bool isDone;

    public:
        Program();
        Program(string name);
        ~Program();

        string getName();
        bool getIsDone();
        void setName(string name);
        void setIsDone(bool isDone);
};

class Assignment
{
    private:
        string name;
        bool isOverdue;

    public:
        Assignment();
        Assignment(string name);
        ~Assignment();

        string getName();
        bool getIsOverdue();
        void setName(string name);
        void setIsOverdue(bool isOverdue);
};

class Human
{
    protected:
        string nik;
        string name;
        Gender gender;
        int energy;

    public:
        Human();
        Human(string nik, string name, Gender gender, int energy);
        ~Human();

        string getNIK();
        string getName();
        char getGender();
        int getEnergy();
        void setNIK(string nik);
        void setName(string name);
        void setGender(Gender gender);
        void setEnergy(int energy);

        bool activity(string verb1, string verb2, string object, int energy, string context);
        void eat(string foodName, int energyGained);
        void drink(string drinkName, int energyGained);
        void sleep(string durationInHours, int energyGained);
};

class CollegeStudent : virtual public Human
{
    protected:
        string nim;
        vector<string> textbooks;
        string laptop;
        vector<Assignment> assignments;

    public:
        CollegeStudent();
        CollegeStudent(string nik, string name, Gender gender, int energy, string nim, vector<string> textbooks, string laptop);
        ~CollegeStudent();

        string getNIM();
        vector<string> getTextbooks();
        string getLaptop();
        vector<Assignment> getAssignments();
        void setNIM(string nim);
        void setTextbooks(vector<string> textbooks);
        void setLaptop(string laptop);
        void setAssignments(vector<Assignment> assignments);

        void addTextbook(string textbook);
        void addAssignment(Assignment assignment);

        void study(string subject, int energyLoss);
        void attendClass(string className, int energyLoss);
        void workOnAssignment(Assignment assignment, int energyLoss);
};

class Lecturer : virtual public Human
{
    protected:
        vector<string> subjects;
        vector<CollegeStudent> students;

    public:
        Lecturer();
        Lecturer(string nik, string name, Gender gender, int energy, vector<string> subjects, vector<CollegeStudent> students);
        ~Lecturer();

        vector<string> getSubjects();
        vector<CollegeStudent> getStudents();
        void setSubjects(vector<string> subjects);
        void setStudents(vector<CollegeStudent> students);

        void addSubject(string subject);
        void addStudent(CollegeStudent student);

        void teach(string subject, int energyLoss);
        void giveAssignment(Assignment assignment, int energyLoss);
};

class CollegeTeacher : public Lecturer
{
    private:
        string nip;
        vector<string> markers;
        string laptop;

    public:
        CollegeTeacher();
        CollegeTeacher(string nik, string name, Gender gender, int energy, vector<string> subjects, vector<CollegeStudent> students, string nip, vector<string> markers, string laptop);
        ~CollegeTeacher();

        string getNIP();
        vector<string> getMarkers();
        string getLaptop();
        void setNIP(string nip);
        void setMarkers(vector<string>);
        void setLaptop(string laptop);

        void addMarker(string marker);

        void giveScores(int energyLoss);
};

class Assistant : public CollegeStudent, public Lecturer
{
    private:
        CollegeTeacher collegeTeacher;

    public:
        Assistant();
        Assistant(string nik, string name, Gender gender, int energy, string nim, vector<string> textbooks, string laptop, vector<string> subjects, vector<CollegeStudent> students, CollegeTeacher collegeTeacher);
        ~Assistant();

        CollegeTeacher getCollegeTeacher();
        void setCollegeTeacher(CollegeTeacher collegeTeacher);
};

class DPM : public CollegeStudent
{
    private:
        string position;

    public:
        DPM();
        DPM(string nik, string name, Gender gender, int energy, string nim, vector<string> textbooks, string laptop, string position);
        ~DPM();

        string getPosition();
        void setPosition(string position);

        void appreciate(Program program, int energyLoss);
};

class BEM : public CollegeStudent
{
    private:
        string position;
        vector<Program> programs;
        vector<string> innovations;

    public:
        BEM();
        BEM(string nik, string name, Gender gender, int energy, string nim, vector<string> textbooks, string laptop, string position, vector<Program> programs, vector<string> innovations);
        ~BEM();

        string getPosition();
        vector<Program> getPrograms();
        vector<string> getInnovations();
        void setPosition(string position);
        void setPrograms(vector<Program> programs);
        void setInnovations(vector<string> innovations);

        void addProgram(Program program);
        void addInnovation(string innovation);

        void doProgram(Program program, int energyLoss, DPM dpm);
        void planInnovation(string innovation, int energyLoss);
        void workOnInnovation(string innovations, int energyLoss);
};