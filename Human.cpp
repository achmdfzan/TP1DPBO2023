#include <bits/stdc++.h>

using namespace std;

class Human
{
    protected:

        string nik;
        string nama;
        string jenkel;
    
    public:

        Human() {}

        Human(string nik, string nama, string jenkel)
        {
            this->nik = nik;
            this->nama = nama;
            this->jenkel = jenkel;
        }

        ~Human() {}

        string getNIK()
        {
            return this->nik;
        }

        void setNIK(string nik)
        {
            this->nik = nik;
        }

        string getNama()
        {
            return this->nama;
        }

        void setNama(string nama)
        {
            this->nama = nama;
        }

        string getJenkel()
        {
            return this->jenkel;
        }

        void setJenkel(string jenkel)
        {
            this->jenkel = jenkel;
        }
};
