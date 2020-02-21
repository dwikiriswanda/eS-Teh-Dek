#ifndef DLL_FIRST_LAST_H_INCLUDED
#define DLL_FIRST_LAST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define prev(P) P->prev
#define info(P) P->info
#define next(P) P->next


using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
    address prev;
};

struct List{
    address first;
    address last;
};

void createList(List &L);//1
address createElemen(infotype dataBaru);//2
void insertFirst(List &L, address P);//3
void insertLast(List &L, address P);//4
void insertAfter(address Prec, address P);//5
void insertAscending(List &L, infotype dataBaru);//6
void deleteFirst(List &L, address &P);//7
void deleteLast(List &L, address &P);//8
void deleteAfter(address Prec, address &P);//9
void deleteElm(List &L, infotype dataHapus);//10
void printList(List &L);//11
bool findElemen(List L, infotype dataDicari);//12
int frequencyofElm(List L, infotype dataDicari);//13





#endif // DLL_FIRST_LAST_H_INCLUDED
