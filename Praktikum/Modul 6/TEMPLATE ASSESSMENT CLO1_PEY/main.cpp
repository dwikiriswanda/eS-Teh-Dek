#include "LIST.h"

int main()
{
    // a.	Tuliskan identitas pada variabel nama, nim dan kelas.
    char nama[30] = "TULISKAN NAMA DISINI";
    char nim[11] = "0123451234";
    char kelas[15] = "AA-BB-CC";    // AA = {IF/SE/IT}, BB = Angkatan, CC = kelas 01/02/../12/INT/GAB01/GAB02/...
    cout << "Hello world!" << endl;
    cout << "PRAKTIKUM STRUKTUR DATA"<< endl;
    cout << "-----------------------"<< endl;
    cout << "Nama  : "<<nama<<endl;
    cout << "Nim   : "<<nim<<endl;
    cout << "Kelas : "<<kelas<<endl;

    // b. deklarasikan sebuah list kosong
    List L;
    createList(L);

    // c. tambahakan 10 digit NIM anda sebagai data dari list. masing-masing elemen list berisi 1 digit,
    //    apabila bilangan ganjil insertkan di awal, kalau genap insertkan di akhir (asumsi 0 adalah genap).
    cout<<"digit NIM (pisahkan dengan spasi antar digit) = "<<endl;
    ...
    show(L);
    // d. inputkan sebuah bilangan N, hapus seluruh bilangan N dari dalam list
    //    manfaatkan subprogram findElemen, deleteData, dan struktur kontrol perulangan(LOOP)
    int N;
    cout<<"Bilangan N = ";
    cin>>N;
    ...
    show(L);

    // e. cobakan instruksi no d dengan NIM seperti yang dilampirkan pada file word, apakah berhasil berjalan?

    // SELESAI
    cout<<"PRAKTIKUM SELESAI";
    return 0;
}
