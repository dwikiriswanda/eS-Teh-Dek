#include "DLL_First_Last.h"
#include <iostream>

using namespace std;

int main()
{
    List L;
    createList(L);
    printList(L);

//    terbimbing
//    insertAscending(L, 25);
//    printList(L);
//    insertAscending(L, 10);
//    printList(L);
//    insertAscending(L, 32);
//    printList(L);
//    insertAscending(L, 3);
//    printList(L);
//    deleteElm(L, 32);
//    printList(L);
//    deleteElm(L, 3);
//    printList(L);
//    deleteElm(L, 10);
//    printList(L);
//    deleteElm(L, 25);
//    printList(L);

//    mandiri
    insertAscending(L, 25);
    printList(L);
    insertAscending(L, 10);
    printList(L);
    insertAscending(L, 10);
    printList(L);
    insertAscending(L, 25);
    printList(L);
    insertAscending(L, 25);
    printList(L);

    cout << findElemen(L, 10) << endl;
    cout << frequencyofElm(L, 10) << endl;
    cout << frequencyofElm(L, 25) << endl;
    cout << frequencyofElm(L, 2) << endl;

    return 0;
}
