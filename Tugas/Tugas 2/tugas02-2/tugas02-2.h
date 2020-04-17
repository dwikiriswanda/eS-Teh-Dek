#ifndef TUGAS02-2_H_INCLUDED
#define TUGAS02-2_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

/*
Name : Muhamad Dwiki Riswanda
NIM : 1302194015
*/

using namespace std;

struct titik{
    int x;
    int y;
};

struct segitiga{
    titik titikPertama;
    titik titikKedua;
    titik titikKetiga;
};

typedef segitiga infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
};

struct list{
    address first;
};


#endif // TUGAS02-2_H_INCLUDED
