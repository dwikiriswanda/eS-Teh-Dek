#include "sll.h"

using namespace std;

int main()
{
    infotype angka, dicari;
    string hapus;
    List L;
    adr pointerForInsert, pointerForDelete;
    createList(L);

    cout << "Masukkan angka ke-1 : ";
    cin >> angka;

    pointerForInsert = alokasi(angka);
    insertLast(L,pointerForInsert);

    cout << "Masukkan angka ke-2 : ";
    cin >> angka;

    pointerForInsert = alokasi(angka);
    insertLast(L,pointerForInsert);

    cout << "Masukkan angka ke-3 : ";
    cin >> angka;

    pointerForInsert = alokasi(angka);
    insertLast(L,pointerForInsert);


    cout << "Masukkan angka ke-4 : ";
    cin >> angka;

    pointerForInsert = alokasi(angka);
    insertLast(L,pointerForInsert);


    cout << "Masukkan angka ke-5 : ";
    cin >> angka;

    pointerForInsert = alokasi(angka);
    insertLast(L,pointerForInsert);

    cout << "Isi list saat ini adalah : " << endl;
    show(L);
    cout << endl;

    cout << "Masukkan data yang dicari : ";
    cin >> dicari;

    if ( findInfo(L, dicari) == NULL) {
        cout << "MAAF DATA TIDAK DITEMUKAN" << endl;
    } else {
        cout << "DATA DITEMUKAN PADA ALAMAT " << findInfo(L, dicari) << endl;
    }

    cout << "Kondisi awal : ";
    show(L);
    cout << endl;

    while (first(L) != NULL){
        cout << "Lokasi elemen yang dihapus(depan/belakang) ? ";
        cin >> hapus;
        if (hapus == "depan"){
            deleteFirst(L,pointerForDelete);
            cout << "Kondisi setelah dihapus : ";
            show(L);
            cout << endl;
        } else if (hapus == "belakang"){
            deleteLast(L,pointerForDelete);
            cout << "Kondisi setelah dihapus : ";
            show(L);
            cout << endl;
        }
        cout << "SELESAI ";
    }

    return 0;
}
