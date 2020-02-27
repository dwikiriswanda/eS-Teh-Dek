#include "circulardll-first.h"

/*
Name    : Muhamad Dwiki Riswanda
NIM     : 1302194015
*/

using namespace std;

int main()
{
    list L;
    address Prec, P;
    char data[] = ("cat");
    int jumlah;

    createList(L);
    cout << "Tampilkan semua data: ";
    printInfo(L);

    createNewElmt(P, 'a');
    insertFirst(L, P);
    createNewElmt(P, 't');
    insertFirst(L, P);
    Prec = cariElmt(L, 'a');
    createNewElmt(P, 't');
    insertAfter(L, P, Prec);
    Prec = cariElmt(L, 't');
    createNewElmt(P, 'c');
    insertAfter(L, P, Prec);
    createNewElmt(P, 'a');
    insertLast(L, P);
    createNewElmt(P, 's');
    insertLast(L, P);
    createNewElmt(P, 'c');
    insertLast(L, P);
    createNewElmt(P, 'a');
    insertLast(L, P);

    cout << "Tampilkan semua data: ";
    printInfo(L);
    cout << endl;

    jumlah = countWord(data, L);
    cout << "Cari kata cat: " << jumlah << endl;

    return 0;
}
