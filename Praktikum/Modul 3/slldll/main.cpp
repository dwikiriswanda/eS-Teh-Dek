#include "slldll.h"

using namespace std;

int main()
{
    List L;

    createList(L);
    printList(L);
    insertDescending(L, 40);
    printList(L);
    insertDescending(L, 10);
    printList(L);
    insertDescending(L, 50);
    printList(L);
    insertDescending(L, 42);
    printList(L);
    insertDescending(L, 16);
    printList(L);
//    cout << median(L);
    deleteElm(L, 10);
    printList(L);
//    cout << median(L);
    deleteElm(L, 40);
    printList(L);
    deleteElm(L, 42);
    printList(L);
    deleteElm(L, 50);
    printList(L);
    deleteElm(L, 16);
    printList(L);


    return 0;
}
