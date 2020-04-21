#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define prev(P) P->prev
#define info(P) P->info

using namespace std;

typedef struct elmList *address;
typedef int infotype;

struct elmList{
    infotype info;
    address prev;
};

struct List{
    address first,last;
};

void createList(List &L);
/** IS. -
    FS. terbentuk sebuah list kosong */

void alokasi(address &P);
/** IS. -
    FS. p berisi alamat suatu elemen baru hasil alokasi, di mana info berasal dari input user */

bool isEmpty(List L);
/** mengembalikan TRUE apabila l kosong, atau FALSE apabila sebaliknya */

void insertFirst(List &L, address P);
/** IS. terdefinisi sebuah list l (mungkin kosong), dan sebuah pointer p yang berisi elemen baru
    FS. elemen yang ditunjuk oleh p ditambahkan sebagai elemen pertama */

void insertLast(List &L, address P);
/** IS. terdefinisi sebuah list l (mungkin kosong), dan sebuah pointer p yang berisi elemen baru
    FS. elemen yang ditunjuk oleh p ditambahkan sebagai elemen terakhir */

address findElemen(List L, infotype X);
/** mengembalikan alamat dari elemen list yang memiliki info sama dengan x, atau NIL apabila tidak ditemukan */

void deleteData(List &L, address &P);
/** IS. terdefinisi sebuah list l (l tidak kosong), dan p berisi alamat salah satu elemen list
    FS. elemen yang ditunjuk oleh p dihapus dari dalam list l */

void show(List L);
/** IS. terdefinisi sebuah list l (mungkin kosong)
    FS. semua info dari elemen list l ditampilkan ke layar */


#endif // HEADER_1302194015_H_INCLUDED
