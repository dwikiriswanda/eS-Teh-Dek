#ifndef DLL_FIRST_LAST_H_INCLUDED
#define DLL_FIRST_LAST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define prev(P) P->prev
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
    address prev;
};

struct list{
    address first;
    address last;
};

void createList(list &L);
address createElemen(infotype dataBaru);
void insertFirst(list &L, address P);
void insertLast(list &L, address P);
void insertAfter(address Prec, address P);
void insertAscending(list &L, infotype databaru);
void deleteFirst(list &L, address &P);
void deleteLast(list &L, address &P);
void deleteAfter(address Prec, address &P);
void deleteElm(list &L, infotype dataHapus);
void printList(list L);
bool findElemen(list L, infotype dataDicari);
int frequencyofElm(list L, infotype dataDicari);



#endif // DLL_FIRST_LAST_H_INCLUDED
