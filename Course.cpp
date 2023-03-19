#include "Mahasiswa.cpp"

class Course
{
    private:

        string namaMatkul;
        vector<Dosen> vectorDosen;
        vector<Mahasiswa> vectorMahasiswa;
    
    public:

        Course() {}

        Course(string namaMatkul)
        {
            this->namaMatkul = namaMatkul;
        }

        ~Course() {}

        string getNamaMatkul()
        {
            return this->namaMatkul;
        }

        void setNamaMatkul(string namaMatkul)
        {
            this->namaMatkul = namaMatkul;
        }

        vector<Dosen> getVectorDosen()
        {
            return this->vectorDosen;
        }

        void addDosen(Dosen dsn)
        {
            this->vectorDosen.push_back(dsn);
        }

        vector<Mahasiswa> getVectorMahasiswa()
        {
            return this->vectorMahasiswa;
        }

        void addMahasiswa(Mahasiswa mhs)
        {
            this->vectorMahasiswa.push_back(mhs);
        }
};