#include "SivitasAkademik.cpp"

class Dosen : public SivitasAkademik
{
    private:

        string nip;
        string pendAkhir;
        string keahlian;
    
    public:

        Dosen() {}

        Dosen(string nik, string nama, string jenkel, string asalUniv, string emailEdu, string nip, string pendAkhir, string keahlian)
        {
            this->nik = nik;
            this->nama = nama;
            this->jenkel = jenkel;

            this->asalUniv = asalUniv;
            this->emailEdu = emailEdu;

            this->nip = nip;
            this->pendAkhir = pendAkhir;
            this->keahlian = keahlian;
        }

        ~Dosen() {}

        string getNIP()
        {
            return this->nip;
        }

        void setNIP(string nip)
        {
            this->nip = nip;
        }

        string getPendAkhir()
        {
            return this->pendAkhir;
        }

        void setPendAkhir(string pendAkhir)
        {
            this->pendAkhir = pendAkhir;
        }

        string getKeahlian()
        {
            return this->keahlian;
        }

        void setKeahlian(string keahlian)
        {
            this->keahlian = keahlian;
        }
};
