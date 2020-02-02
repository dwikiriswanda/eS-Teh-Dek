#include <iostream>
#include "list.cpp"

/*
Name : Muhamad Dwiki Riswanda
NIM : 1302194015
*/

using namespace std;

int main()
{
    infotype x;
    List L;
    address p;
    createList(L);
    cout << "Masukkan 3 Digit NIM Terakhir"<< endl;
    cout << "Masukkan angka pertama: ";
    cin >> x;

    p = allocate(x);
    insertFirst(L,p);
    cout << "Isi List: ";
    printInfo(L);

    cout << "Masukkan angka kedua: ";
    cin >> x;

    p = allocate(x);
    insertFirst(L,p);
    cout << "Isi List: ";
    printInfo(L);

    cout << "Masukkan angka ketiga: ";
    cin >> x;

    p = allocate(x);
    insertFirst(L,p);
    cout << "Isi List: ";
    printInfo(L);

    cout << endl;
    deleteFirst(L, p);
    cout << "Isi List (setelah dilakukan deleteFirst): ";
    printInfo(L);
    cout << endl;

    cout << "=======================================" << endl;
    cout << "           SESI HAVE FUN" << endl;
    cout << "=======================================" << endl;

    string s;
    infotype b, d, e;
    List c;
    address a;
    createList(c);
    int i = 1;
    cout << "Masukkan NIM perdigit"<< endl;
    while (i <= 10){
        cout << "Digit "<< i << ": ";
        cin >> b;
        insertLast(c,allocate(b));
        i++;
    }

    cout << "Isi List: ";
    printInfo(c);

    cout << endl;
    cout << "Masukan Elemen: ";
    cin  >> b;
    cout << "Dimasukkan Setelah: ";
    cin  >> d;
    if ( searchInfo(c,allocate(d)) == d ){
        insertAfter(c,allocate(d),allocate(b));
        cout << "Isi List: ";
        printInfo(c);
    } else {
        cout << "KEY NOT FOUND"<<endl;
    }
    cout << "Delete Last List? (y/n): ";
    cin >> s;
    if (s == "y"){
        deleteLast(c);
        cout << "Isi List: ";
        printInfo(c);
    } else {
        cout << "Delete Last Tidak Dijalankan."<< endl;
    }
    cout << "Delete After: ";
    cin >> b ;
    if ( searchInfo(c,allocate(b)) == b ){
        deleteAfter(c,allocate(b));
        cout << "Isi List: ";
        printInfo(c);
    } else {
        cout << "KEY NOT FOUND"<<endl;
    }
    cout << "Cari Elemen: ";
    cin >> d;
    b = searchInfo(c,allocate(d));
    if (b == d){
        cout << "Elemen Ada."<< endl;
    }  else {
        cout << "Maaf, Elemen Tidak Ada."<<endl;
    }

    return 0;
}
