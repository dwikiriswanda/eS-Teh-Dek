#include "doublelinkedlist.h"

/*
Name : Muhamad Dwiki Riswanda
NIM : 1302194015
*/

using namespace std;

int main()
{
    List L;
    address p;

    createList(L);
    createNewElmt(11,p);
    insertFirst(L,p);
    show(L);
    createNewElmt(22,p);
    insertFirst(L,p);
    show(L);
    createNewElmt(33,p);
    insertFirst(L,p);
    show(L);

    cout << "Jumlah elemen ada " << jumlahList(L) << endl;
    cout << "Nilai tengah dari list tersebut adalah " << median(L);
}
