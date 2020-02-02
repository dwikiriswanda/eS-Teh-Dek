#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

/*
Name : Muhamad Dwiki Riswanda
NIM : 1302194015
*/

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct List{
    address first;
};

address allocate(infotype x);

void insertFirst(List &L, address P);

void printInfo(List L);

void deleteFirst(List &L, address &P);

//SESI HAVE FUN

void insertLast(List &L, address &P);

void insertAfter(List &L, address key, address &P);

void deleteLast(List &L);

void deleteAfter(List &L, address key);

infotype searchInfo(List L, address key);

#endif // LIST_H_INCLUDED
