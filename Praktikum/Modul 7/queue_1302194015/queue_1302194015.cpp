#include"queue_1302194015.h"

void createQueue(Queue &Q){
    head(Q) = NIL;
    tail(Q) = NIL;
}

void masukkanTransaksi(Queue &Q, string data){
    address P = new elmQueue;
    info(P) = data;
    next(P) = NIL;
    if(head(Q) == NIL){
        head(Q) = P;
        tail(Q) = P;
    } else {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void prosesTransaksi(Queue &Q){
    address P = head(Q);
    if(P == tail(Q)) {
        head(Q) = NIL;
        tail(Q) = NIL;
    } else {
        head(Q) = next(P);
        next(P) = NIL;
    }
}

void printQueue(Queue &Q) {
    address P = head(Q);
    while(P != NIL) {
        cout << info(P) << " ";
        P = next(P);
    }
    cout << endl;
}
