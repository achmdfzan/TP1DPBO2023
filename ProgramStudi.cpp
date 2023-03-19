#include "Course.cpp"

class ProgramStudi
{
    private:

        string namaProdi;
        string kode;
        string fakultas;
        vector<Course> vectorCourse;
        vector<Dosen> vectorDosen;
        vector<Mahasiswa> vectorMahasiswa;
    
    public:

        ProgramStudi() {}

        ProgramStudi(string namaProdi, string kode, string fakultas)
        {
            this->namaProdi = namaProdi;
            this->kode = kode;
            this->fakultas = fakultas;
        }

        ~ProgramStudi() {}

        string getNamaProdi()
        {
            return this->namaProdi;
        }

        void setNamaProdi(string namaProdi)
        {
            this->namaProdi = namaProdi;
        }

        string getKode()
        {
            return this->kode;
        }

        void setKode(string kode)
        {
            this->kode = kode;
        }

        string getFakultas()
        {
            return this->fakultas;
        }

        void setFakultas(string fakultas)
        {
            this->fakultas = fakultas;
        }

        vector<Course> getVectorCourse()
        {
            return this->vectorCourse;
        }

        void addCourse(Course crs)
        {
            this->vectorCourse.push_back(crs);
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