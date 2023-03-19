/*
    Saya Achmad Fauzan NIM 2108061 mengerjakan soal Tugas Praktikum 1 dalam mata
    kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "TP1.hpp"

// ================
// g++ *.cpp -o run
// ================

int main()
{
    // deklarasi objek
    Assignment am1("Tugas Praktikum 1");
    Assignment am2("Worksheet 1");
    Assignment am3("Presentasi Progress Kelompok");
    vector<Assignment> vam {am1, am2, am3};
    Program p1("Kaderisasi");
    Program p2("Upgrading");
    Program p3("Ngabers");
    vector<Program> vp {p1, p2, p3};
    CollegeStudent cs1("3141592653589790", "Apri", Male, 100, "2233440", {}, "Asus VivoBook");
    CollegeStudent cs2("3141592653589791", "Anandita", Female, 100, "2233441", {"Algoritma dan Pemrograman 1"}, "Lenovo Yoga");
    CollegeStudent cs3("3141592653589792", "Kamal", Male, 100, "2233442", {"Competitive Programming", "Machine Learning"}, "Asus TUF");
    vector<CollegeStudent> vcs {cs1, cs2, cs3};
    CollegeTeacher ct1("3141592653589793", "Mrs. Rosa", Female, 100, {"Algoritma dan Pemrograman I", "Algoritma dan Pemrograman II", "Struktur Data", "Desain dan Pemrograman Berorientasi Objek"}, vcs, "2718281", {"Snowman", "Standard"}, "ROG Zephyrus Duo");
    CollegeTeacher ct2("3141592653589794", "Mr. Away", Male, 100, {"Rekayasa Perangkat Lunak", "E-Business", "Sistem Informasi"}, vcs, "2718282", {"Standard", "Joyko"}, "Macbook Pro M2");
    CollegeTeacher ct3("3141592653589795", "Mr. Eddy", Male, 100, {"Jaringan Komputer", "Proyek Konsultasi", "Internet of Things"}, vcs, "2718283", {"Joyko", "Snowman"}, "Microsoft Surface");
    vector<CollegeTeacher> vct {ct1, ct2, ct3};
    Assistant at1("3141592653589796", "Fauzan", Male, 100, "2102103", {}, "Lenovo Ideapad", {"Algoritma dan Pemrograman I", "Algoritma dan Pemrograman II"}, vcs, ct1);
    Assistant at2("3141592653589797", "Azzahra", Female, 100, "2102104", {"Pendidikan Pancasila"}, "Lenovo Ideapad", {"Sistem Basis Data"}, vcs, ct2);
    Assistant at3("3141592653589798", "Yasin", Male, 100, "2102105", {}, "ROG Flow", {"Jaringan Komputer", "Robotika"}, vcs, ct3);
    vector<Assistant> vat {at1, at2, at3};
    BEM b1("3141592653589799", "Rafi", Male, 100, "2102106", {}, "Asus", "Leader", vp, {"Konsumsi setiap hari", "Pemberdayaan kosan Bintang"});
    BEM b2("3141592653589800", "Aini", Female, 100, "2102107", {"Economy"}, "Acer", "Head of Economy and Business Division", {p2}, {"Jangan jadiin takoyaki danusan"});
    BEM b3("3141592653589801", "Jalu", Male, 100, "2102108", {}, "Lenovo", "Staff of Religious Division", {p1, p3}, {});
    vector<BEM> vb {b1, b2, b3};
    DPM d1("3141592653589802", "Alghaniyu", Male, 100, "2102109", {"Ilmu KPOP", "Ilmu Komedi"}, "Lenovo", "Staff of Monitoring Division");
    DPM d2("3141592653589803", "Laelatusyadiah", Female, 100, "2102110", {}, "Asus", "Staff of Field Division");
    DPM d3("3141592653589804", "Febry", Male, 100, "2102111", {"Ilmu Menghilang"}, "Alienware", "Staff of Monitoring Division");
    vector<DPM> vd {d1, d2, d3};

    cout << endl << "- M A H A S I S W A -" << endl << endl;
    for (CollegeStudent cs : vcs)
    {
        cout << "Name       : " << cs.getName() << endl;
        cout << "NIM        : " << cs.getNIM() << endl;
        if (cs.getTextbooks().size() > 0) cout << "Textbooks  : - " << cs.getTextbooks()[0] << endl;
        for (int i = 1; i < cs.getTextbooks().size(); i++) cout << "             - " << cs.getTextbooks()[i] << endl;
        cout << endl;
    }
    cs1.study("Laravel", -60);
    cs1.attendClass("Metodologi Penelitian", -60);
    cs1.eat("Nasi Goreng", 20);
    cs1.attendClass("Metodologi Penelitian", -60);

    cout << endl << "- D O S E N -" << endl << endl;
    for (CollegeTeacher ct : vct)
    {
        cout << "Name       : " << ct.getName() << endl;
        cout << "NIP        : " << ct.getNIP() << endl;
        if (ct.getSubjects().size() > 0) cout << "Subject    : - " << ct.getSubjects()[0] << endl;
        for (int i = 1; i < ct.getSubjects().size(); i++) cout << "             - " << ct.getSubjects()[i] << endl;
        cout << endl;
    }
    ct1.sleep("6", 40);
    ct1.teach(ct1.getSubjects()[3], -140);
    ct2.giveScores(-90);                    // BONUS
    ct3.teach(ct3.getSubjects()[2], -80);

    cout << endl << "- A S I S T E N -" << endl << endl;
    for (Assistant at : vat)
    {
        cout << "Name       : " << at.getName() << endl;
        cout << "NIM        : " << at.getNIM() << endl;
        if (at.getSubjects().size() > 0) cout << "Subject    : - " << at.getSubjects()[0] << endl;
        for (int i = 1; i < at.getSubjects().size(); i++) cout << "             - " << at.getSubjects()[i] << endl;
        cout << endl;
    }
    at1.giveAssignment(am3, -45);
    at2.teach("Normalisasi", -50);
    at2.eat("Nasi Padang", 50);
    at3.attendClass("Internet of Things", -5);

    cout << endl << "- B E M -" << endl << endl;
    for (BEM b : vb)
    {
        cout << "Name       : " << b.getName() << endl;
        cout << "NIM        : " << b.getNIM() << endl;
        if (b.getPrograms().size() > 0) cout << "Subject    : - " << b.getPrograms()[0].getName() << endl;
        for (int i = 1; i < b.getPrograms().size(); i++) cout << "             - " << b.getPrograms()[i].getName() << endl;
        cout << endl;
    }
    b3.doProgram(p3, -90, d1);                          // BONUS
    b1.planInnovation("Absen pake IoT", -70);
    b2.workOnInnovation(b2.getInnovations()[0], -50);
    b3.sleep("10", 10);

    cout << endl << "- D P M -" << endl << endl;
    for (DPM d : vd)
    {
        cout << "Name       : " << d.getName() << endl;
        cout << "NIM        : " << d.getNIM() << endl;
        if (d.getTextbooks().size() > 0) cout << "Textbooks  : - " << d.getTextbooks()[0] << endl;
        for (int i = 1; i < d.getTextbooks().size(); i++) cout << "             - " << d.getTextbooks()[i] << endl;
        cout << endl;
    }
    d1.appreciate(p1, -10);
    d2.appreciate(p3, -20);
    b2.doProgram(p2, -30, d3);
    d1.workOnAssignment(am1, -90);

    return 0;
}