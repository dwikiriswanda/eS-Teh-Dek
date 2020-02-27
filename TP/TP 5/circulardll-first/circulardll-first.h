#ifndef CIRCULARDLL-FIRST_H_INCLUDED
#define CIRCULARDLL-FIRST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define prev(P) P->prev
#define info(P) P->info
#define next(P) P->next

/*
Name    : Muhamad Dwiki Riswanda
NIM     : 1302194015
*/

using namespace std;

typedef char infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address prev;
    address next;
};

struct list {
    address first;
};

bool isEmpty(list L); //1
void createList(list &L); //2
void createNewElmt(address &P, infotype X); //3
void insertFirst(list &L, address P); // 4
void insertAfter(list &L, address &P, address Prec); //5
void deleteFirst(list &L, address &P); //6
void deleteAfter(list &L, address &P, address Prec); //7
int countWord(char data[], list L); //8
void printInfo(list L); //9
void insertLast(list &L, address P); //10
address cariElmt(list L, infotype X); //11

#endif // CIRCULARDLL-FIRST_H_INCLUDED
