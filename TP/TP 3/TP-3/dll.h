#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include <iostream>
#include <string.h>
#include <stdbool.h>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

/*
Name : Muhamad Dwiki Riswanda
NIM : 1302194015
*/

using namespace std;

struct buku {
    string ID;
    string judul;
    string pengarang;
    string penerbit;
    int tahun;
};

typedef buku infotype;
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

void buatList(list &L);
bool listKosong(list L);
address cariElemen(list L, string X);
void buatElemen(address &P, string ID, string judul, string pengarang, string penerbit, int tahun);
void tambahDataTerakhir(list &L, address P);
void hapusDataTerakhir(list &L, address P);
void lihatList(list L);
void tambahDataSetelah(list &L, address prec, address P);
int jumBuku(list L, int thn);

#endif // DLL_H_INCLUDED
