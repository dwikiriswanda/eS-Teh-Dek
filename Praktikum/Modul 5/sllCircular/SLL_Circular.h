#ifndef SLL_CIRCULAR_H_INCLUDED
#define SLL_CIRCULAR_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define info(P) P->info
#define next(P) P->next

using namespace std;

struct infotype {
    string nama;
    int prioritas;
    int sisa_durasi;
};

typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct list {
    address first;
};

//  MANDIRI
//struct list {
//    address last;
//};

void createList(list &L); //1
address createElemen(infotype dataBaru); //2
void insertFirst(list &L, address P); //3
void insertLast(list &L, address P); // 4
void insertAfter(list &L, address Prec, address P); //5
void deleteFirst(list &L, address &P); //6
void deleteLast(list &L, address &P); //7
void deleteAfter(list &L, address Prec, address &P); //8
void printList(list L); //9
int panjangList(list L); //10
address cariElm(list L, string namaProses); //11


#endif // SLL_CIRCULAR_H_INCLUDED
