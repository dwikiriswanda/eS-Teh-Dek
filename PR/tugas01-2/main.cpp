#include <iostream>

using namespace std;

int main()
{
    struct dataDiri{
        string namaDepan;
        string namaTengah;
        string namaBelakang;
        string alamat;
        string negara;
        int kodePos;
    };

    dataDiri akuSiapa;
    akuSiapa.namaDepan = "John";
    akuSiapa.namaTengah = "F";
    akuSiapa.namaBelakang = "Kurniawan";
    akuSiapa.alamat = "Jl.Budhi IX No. B/18";
    akuSiapa.negara = "Indonesia";
    akuSiapa.kodePos = 11530;

    cout << "===========" << endl;
    cout << "Data Diriku" << endl;
    cout << "===========" << endl;
    cout << akuSiapa.namaDepan << endl;
    cout << akuSiapa.namaTengah << endl;
    cout << akuSiapa.namaBelakang << endl;
    cout << akuSiapa.alamat << endl;
    cout << akuSiapa.negara << endl;
    cout << akuSiapa.kodePos << endl;

    return 0;
}
