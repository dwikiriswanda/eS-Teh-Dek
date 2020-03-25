#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

typedef int infotype;

struct Queue{
    infotype info[5];
    int head;
    int tail;
};

void createQueue(Queue &Q);

bool isEmptyQueue(Queue Q);
bool isEmptyAlt2(Queue Q);
bool isEmptyAlt3(Queue Q); //belum paham

bool isFullQueue(Queue Q);
bool isFullAlt2(Queue Q);
bool isFullAlt3(Queue Q); //belum paham

void enqueue(Queue &Q, infotype X);
void enqueueAlt2(Queue &Q, infotype X);
void enqueueAlt3(Queue &Q, infotype X); //belum paham

infotype dequeue(Queue &Q);
infotype dequeueAlt2(Queue &Q);
infotype dequeueAlt3(Queue &Q); //belum paham

void printInfo(Queue Q);
#endif // QUEUE_H_INCLUDED
