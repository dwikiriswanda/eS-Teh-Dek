#ifndef DOUBLELINKEDLIST_H_INCLUDED
#define DOUBLELINKEDLIST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(p) p->next
#define info(p) p->info

/*
Name : Muhamad Dwiki Riswanda
NIM : 1302194015
*/

using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

bool isEmpty(List L);
void createList(List &L);
void createNewElmt(infotype x, address &p);
void insertFirst(List &L, address p);
void insertAfter(List &L, address p, address &prec);
void insertLast(List &L, address p);
void deleteFirst(List &L, address &p);
void deleteAfter(List &L, address prec, address &p);
void deleteLast(List &L, address &p);
void concat(List L1, List L2, List &L3);
float median(List L);
int jumlahList(List L);
void show(List L);


#endif // DOUBLELINKEDLIST_H_INCLUDED
