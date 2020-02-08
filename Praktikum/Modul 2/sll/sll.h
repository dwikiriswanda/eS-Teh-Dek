#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info


using namespace std;

typedef int infotype;
typedef struct elmlist *adr;

struct elmlist{
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createList(List &L); //1
adr alokasi(infotype x); //2
void insertFirst(List &L, adr P); //3
void insertLast(List &L, adr P); //4
void insertAfter(List &L, adr Prec, adr P); //5
void deleteFirst(List &L, adr &P); //6
void deleteLast(List &L, adr P); //7
void deleteAfter(List &L, adr Prec, adr &P); //8
void show(List L); //9
adr findInfo(List L, infotype key); //10




#endif // SLL_H_INCLUDED
