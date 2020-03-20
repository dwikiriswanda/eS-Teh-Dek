#include "header_1302194015.h"

void createList(List &L)
/** IS. -
    FS. terbentuk sebuah list kosong */
{
    first(L) = NULL;
    last(L) = NULL;
}

void alokasi(address &P)
/** IS. -
    FS. p berisi alamat suatu elemen baru hasil alokasi, di mana info berasal dari input user */
{
    infotype X;
    cin >> X;
    P = new elmList;
    prev(P) = NULL;
    info(P) = X;
}

bool isEmpty(List L)
/** mengembalikan TRUE apabila l kosong, atau FALSE apabila sebaliknya */
{
    if(first(L) == NULL){
        return true;
    } else {
        return false;
    }
}

void insertFirst(List &L, address P)
/** IS. terdefinisi sebuah list l (mungkin kosong), dan sebuah pointer p yang berisi elemen baru
    FS. elemen yang ditunjuk oleh p ditambahkan sebagai elemen pertama */
{
    if(isEmpty(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertLast(List &L, address P)
/** IS. terdefinisi sebuah list l (mungkin kosong), dan sebuah pointer p yang berisi elemen baru
    FS. elemen yang ditunjuk oleh p ditambahkan sebagai elemen terakhir */
{
    if(isEmpty(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        last(L) = P;
    }
}

address findElemen(List L, infotype X)
/** mengembalikan alamat dari elemen list yang memiliki info sama dengan x, atau NIL apabila tidak ditemukan */
{
    address P = last(L);
    while(P != NULL) {
        if(info(P) == X) {
            return P;
        }
        P = prev(P);
    }
    return NULL;
}

void deleteData(List &L, address &P)
/** IS. terdefinisi sebuah list l (l tidak kosong), dan p berisi alamat salah satu elemen list
    FS. elemen yang ditunjuk oleh p dihapus dari dalam list l */
{
    if(P == last(L)) {
        last(L) = prev(P);
        prev(P) = NULL;
    } else if(P == first(L)) {
        address Q = last(L);
        while(prev(Q) != P) {
            Q = prev(Q);
        }
        prev(Q) = NULL;
        first(L) = Q;
    } else if(first(L)==last(L)) {
        first(L) = NULL;
        last(L) = NULL;
    } else {
        address Q = last(L);
        while(prev(Q) != P) {
            Q = prev(Q);
        }
        prev(Q) = prev(P);
        prev(P) = NULL;
    }
}

void show(List L)
/** IS. terdefinisi sebuah list l (mungkin kosong)
    FS. semua info dari elemen list l ditampilkan ke layar */
{
    address P;
    if(first(L) != NULL) {
        P = last(L);
        while(P != NULL) {
            cout << info(P) << " ";
            P = prev(P);
        }
        cout << endl;
    } else {
        cout << "List Kosong" << endl;
    }
}
