#include <iostream>
#include "DLL_First_Last.h"

using namespace std;

int main()
{

    list L;
    createList(L);
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
    cout<<endl;
    cout<<findElemen(L, 10)<<endl;
    frequencyofElm(L, 10);
    frequencyofElm(L, 25);
    frequencyofElm(L, 2);

    return 0;
}
