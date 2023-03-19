#include "Human.cpp"

class SivitasAkademik : public Human
{
    protected:

        string asalUniv;
        string emailEdu;

    public:

        SivitasAkademik() {}

        SivitasAkademik(string nik, string nama, string jenkel, string asalUniv, string emailEdu)
        {
            this->nik = nik;
            this->nama = nama;
            this->jenkel = jenkel;

            this->asalUniv = asalUniv;
            this->emailEdu = emailEdu;
        }

        ~SivitasAkademik() {}

        string getAsalUniv()
        {
            return this->asalUniv;
        }

        void setAsalUniv(string asalUniv)
        {
            this->asalUniv = asalUniv;
        }

        string getEmailEdu()
        {
            return this->emailEdu;
        }

        void setEmailEdu(string emailEdu)
        {
            this->emailEdu = emailEdu;
        }
};
