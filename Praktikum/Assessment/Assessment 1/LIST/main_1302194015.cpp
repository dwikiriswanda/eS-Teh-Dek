#include "header_1302194015.h"

using namespace std;

int main()
{
    // a. Tuliskan identitas pada variabel nama, nim dan kelas.
    char nama[30] = "Muhamad Dwiki Riswanda";
    char nim[11] = "1302194015";
    char kelas[15] = "SE-43-03";    // AA = {IF/SE/IT}, BB = Angkatan, CC = kelas 01/02/../12/INT/GAB01/GAB02/...
    cout << "Hello world!" << endl;
    cout << "PRAKTIKUM STRUKTUR DATA" << endl;
    cout << "-----------------------" << endl;
    cout << "Nama  : " << nama << endl;
    cout << "Nim   : " << nim << endl;
    cout << "Kelas : " << kelas << endl;

    // b. deklarasikan sebuah list kosong
    List L;
    createList(L);

    // c. tambahakan 10 digit NIM anda sebagai data dari list. masing-masing elemen list berisi 1 digit,
    //    apabila bilangan ganjil insertkan di awal, kalau genap insertkan di akhir (asumsi 0 adalah genap).
    cout << "digit NIM (pisahkan dengan spasi antar digit) = " << endl;

    int i = 0;
    while(i < 10) {
        address P = NULL;
        alokasi(P);
        if(info(P) % 2 == 0) {
            insertLast(L, P);
        } else if(info(P) == 0) {
            insertLast(L, P);
        } else {
            insertFirst(L, P);
        }
        i++;
    }
    show(L);

    // d. inputkan sebuah bilangan N, hapus seluruh bilangan N dari dalam list
    //    manfaatkan subprogram findElemen, deleteData, dan struktur kontrol perulangan(LOOP)
    int N;
    cout << "Bilangan N = ";
    cin >> N;

    while(findElemen(L, N) != NULL){
        address X = findElemen(L, N);
        deleteData(L, X);
    }
    show(L);

    // e. cobakan instruksi no d dengan NIM seperti yang dilampirkan pada file word, apakah berhasil berjalan?

    // SELESAI
    cout << "PRAKTIKUM SELESAI";
    return 0;
}
