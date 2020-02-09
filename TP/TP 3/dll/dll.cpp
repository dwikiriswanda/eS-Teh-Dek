#include "dll.h"
#include <iostream>

/*
Name : Muhamad Dwiki Riswanda
NIM : 1302194015
*/

using namespace std;

void buatList(list &L) {
    first(L) = NULL;
    last(L) = NULL;
}

bool listKosong(list L) {
    bool status = true;
    if (first(L) != NULL) {
        status = false;
    }
    return status;
}

address cariElemen(list L, string X){
    if (first(L) != NULL) {
        address P = first(L);
        while (next(P) != NULL && info(P).penerbit != X) {
            P = next(P);
        }
        if (info(P).penerbit == X){
            return P;
        } else {
            P = NULL;
            return P;
        }
    } else {
        return NULL;
    }
}

void buatElemen(address &P, string ID, string judul, string pengarang, string penerbit, int tahun){
    P = new elmList;

    info(P).ID = ID;
    info(P).judul = judul;
    info(P).pengarang = pengarang;
    info(P).penerbit = penerbit;
    info(P).tahun = tahun;
    next(P)= NULL;
    prev(P) = NULL;
}

void tambahDataTerakhir(list &L, address P){
    if (first(L) == NULL) {
        next(P) = first(L);
        first(L) = P;
    } else {
        address prev = first(L);
        while (next(prev) != NULL) {
            prev = next(prev);
        }
        next(prev) = P;
    }
}

void tambahDataSetelah(list &L, address prec, address P) {
    if (first(L) == NULL) {
        cout << "Tidak ada Element" << endl;
    } else {
        if (prec != NULL) {
            next(P) = next(prec);
            next(prec) = P;
            P = NULL;
            prec = NULL;
        } else {
            P = NULL;
        }
    }
}

void hapusDataTerakhir(list &L, address P){
    if (first(L) == NULL) {
        cout << "Tidak ada Element" << endl;
    } else {
        P = first(L);
        address prev = first(L);
        while (next(next(prev)) != NULL) {
            prev = next(prev);
        }
        while (next(P) != NULL) {
            P = next(P);
        }
        P = NULL;
        next(prev) = NULL;
    }
}

void lihatList(list L){
    address P = first(L);
    while (P != NULL) {
        cout << info(P).ID << "   " << info(P).judul << "   " << info(P).pengarang << endl;
        P = next(P);
    }
    cout << endl;
}

int jumBuku(list L, int thn) {
    address P = first(L);
    int counter = 0;
    while (P != NULL){
        if (info(P).tahun <= thn){
            counter = counter + 1;
        }
        P = next(P);
    }
    return counter;
}

