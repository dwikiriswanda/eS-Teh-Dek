#ifndef SLLDLL_H_INCLUDED
#define SLLDLL_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
};

struct List{
    address first;
    address last;
};

void createList(List &L); //1
address createElemen(infotype dataBaru); //2
void insertFirst(List &L, address P); //3
void insertLast(List &L, address P); //4
void insertAfter(address Prec, address P); //5
void insertDescending(List &L, infotype dataBaru); //6
void deleteFirst(List &L, address &P); //7
void deleteLast(List &L, address &P); //8
void deleteAfter(List &L, address Prec, address &P); //9
void deleteElm(List &L, infotype dataHapus); //10
void printList(List L); //11
int hitungElemen(List L); //12
int median(List L); //13




#endif // SLLDLL_H_INCLUDED
