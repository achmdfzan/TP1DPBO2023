#include "Dosen.cpp"

class Mahasiswa : public SivitasAkademik
{
    private:

        string nim;
    
    public:
        
        Mahasiswa() {}

        Mahasiswa(string nik, string nama, string jenkel, string asalUniv, string emailEdu, string nim)
        {
            this->nik = nik;
            this->nama = nama;
            this->jenkel = jenkel;

            this->asalUniv = asalUniv;
            this->emailEdu = emailEdu;

            this->nim = nim;
        }

        ~Mahasiswa() {}

        string getNIM()
        {
            return this->nim;
        }

        void setNIM(string nim)
        {
            this->nim = nim;
        }
};
