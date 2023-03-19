/*
    Saya Achmad Fauzan NIM 2108061 mengerjakan soal Latihan Praktikum 4 dalam mata
    kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "ProgramStudi.cpp"

int main()
{
    Mahasiswa m1("123", "ojan", "cowok", "UPI", "ojan@upi.edu", "2108061");
    Mahasiswa m2("234", "anan", "cewek", "UPI", "anan@upi.edu", "2101114");
    Mahasiswa m3("345", "bintang", "cwk", "UBI", "bintang@upi.edu", "2102665");
    Mahasiswa m4("456", "yasin", "cowok", "UPI", "yasin@upi.edu", "2100137");
    Mahasiswa m5("567", "azzahra", "cewek", "UPI", "azzahra@upi.edu", "2101234");
    Mahasiswa m6("678", "amida", "cewek", "UPI", "amida@upi.edu", "2101010");
    Mahasiswa m7("789", "rayhan", "cowok", "UPI", "rayhan@upi.edu", "2102102");
    Mahasiswa m8("890", "jalu", "jalu", "UPI", "jalu@upi.edu", "2100001");

    Dosen d1("987", "spongebob", "spons", "UPI", "spongebob@upi.edu", "0000001", "sekolah mengemudi", "memasak");
    Dosen d2("876", "patrick", "bintang laut", "UPI", "patrick@upi.edu", "0000002", "ga sekolah", "semuanya");
    Dosen d3("765", "squidward", "cumi/gurita", "UPI", "squidward@upi.edu", "0000003", "sekolah musik", "gaada");
    Dosen d4("654", "tuan crab", "kepiting", "UPI", "crab@upi.edu", "0000004", "ga sekolah", "ngitung duit");

    Course c1("Desain dan Pemrograman Berorientasi Objek");
    c1.addDosen(d1);
    c1.addMahasiswa(m1);
    c1.addMahasiswa(m2);

    Course c2("Pemrograman Visual dan Piranti Bergerak");
    c2.addDosen(d2);
    c2.addMahasiswa(m3);
    c2.addMahasiswa(m4);

    Course c3("Pengantar Pendidikan");
    c3.addDosen(d3);
    c3.addMahasiswa(m5);
    c3.addMahasiswa(m6);

    Course c4("Animasi");
    c4.addDosen(d4);
    c4.addMahasiswa(m7);
    c4.addMahasiswa(m8);

    ProgramStudi p1("Ilmu Komputer", "IK", "FPMIPA");
    p1.addCourse(c1);
    p1.addCourse(c2);
    p1.addDosen(d1);
    p1.addDosen(d2);
    p1.addMahasiswa(m1);
    p1.addMahasiswa(m2);
    p1.addMahasiswa(m3);
    p1.addMahasiswa(m4);

    ProgramStudi p2("Pendidikan Ilmu Komputer", "PIK", "FPMIPA");
    p2.addCourse(c3);
    p2.addCourse(c4);
    p2.addDosen(d3);
    p2.addDosen(d4);
    p2.addMahasiswa(m5);
    p2.addMahasiswa(m6);
    p2.addMahasiswa(m7);
    p2.addMahasiswa(m8);

    vector<ProgramStudi> vectorProdi {p1, p2};

    for (ProgramStudi p : vectorProdi)
    {
        cout << endl;

        cout << "Program Studi :" << endl;
        cout << p.getNamaProdi() << " " << p.getKode() << endl;
        cout << endl;

        cout << "    Dosen " << p.getNamaProdi() << " :" << endl;
        for (Dosen d : p.getVectorDosen())
        {
            cout << "    " << d.getNama() << " " << d.getNIP() << endl;
        }
        cout << endl;

        cout << "    Mahasiswa " << p.getNamaProdi() << " :" << endl;
        for (Mahasiswa m : p.getVectorMahasiswa())
        {
            cout << "    " << m.getNama() << " " << m.getNIM() << endl;
        }
        cout << endl;

        cout << "    Mata Kuliah " << p.getNamaProdi() + " :" << endl;
        for (Course c : p.getVectorCourse())
        {
            cout << "    " << c.getNamaMatkul() << endl;
            cout << "        Dosen : " << endl;
            for (Dosen d : c.getVectorDosen())
            {
                cout << "        " << d.getNama() << endl;
            }
            cout << "        Mahasiswa : " << endl;
            for (Mahasiswa m : c.getVectorMahasiswa())
            {
                cout << "        " << m.getNama() << endl;
            }
        }
        cout << endl;
    }

    return 0;
}