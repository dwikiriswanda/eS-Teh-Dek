#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#define first(A) A.first
#define last(A) A.last
#define prev(A) A->prev
#define info(A) A->info
#define NIL NULL

using namespace std;

typedef struct elemen *address;
typedef int infotype;

struct elemen{
    infotype info;
    address prev;
};

struct List{
    address first,last;
};

void createList(List &l);
/** IS. -
    FS. terbentuk sebuah list kosong */

void alokasi(address &p);
/** IS. -
    FS. p berisi alamat suatu elemen baru hasil alokasi, di mana info berasal dari input user */

bool isEmpty(List l);
/** mengembalikan TRUE apabila l kosong, atau FALSE apabila sebaliknya */

void insertFirst(List &l, address p);
/** IS. terdefinisi sebuah list l (mungkin kosong), dan sebuah pointer p yang berisi elemen baru
    FS. elemen yang ditunjuk oleh p ditambahkan sebagai elemen pertama */

void insertLast(List &l, address p);
/** IS. terdefinisi sebuah list l (mungkin kosong), dan sebuah pointer p yang berisi elemen baru
    FS. elemen yang ditunjuk oleh p ditambahkan sebagai elemen terakhir */

address findElemen(List l, infotype x);
/** mengembalikan alamat dari elemen list yang memiliki info sama dengan x, atau NIL apabila tidak ditemukan */

void deleteData(List &l, address &p);
/** IS. terdefinisi sebuah list l (l tidak kosong), dan p berisi alamat salah satu elemen list
    FS. elemen yang ditunjuk oleh p dihapus dari dalam list l */

void show(List l);
/** IS. terdefinisi sebuah list l (mungkin kosong)
    FS. semua info dari elemen list l ditampilkan ke layar */

#endif // LIST_H_INCLUDED
