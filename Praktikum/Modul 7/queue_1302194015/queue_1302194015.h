#ifndef QUEUE_1302194015_H_INCLUDED
#define QUEUE_1302194015_H_INCLUDED
#include <iostream>
#define head(Q) Q.head
#define tail(Q) Q.tail
#define info(P) P->info
#define next(P) P->next
#define NIL NULL

using namespace std;

typedef string infotype;
typedef struct elmQueue *address;
struct elmQueue{
    infotype info;
    address next;
};
struct Queue{
    address head;
    address tail;
};

void masukkanTransaksi(Queue &Q, string data);
void prosesTransaksi(Queue &Q);
void printQueue(Queue &Q);
void createQueue(Queue &Q);

#endif // QUEUE_1302194015_H_INCLUDED
