#include "sll.h"

using namespace std;

void createList(List &L){
    first(L) = NULL;
}; //1

adr alokasi(infotype x){
    adr p = new elmlist;
    info(p) = x;
    next(p) = NULL;
    return p;
}; //2

void insertFirst(List &L, adr P){
    next(P) = first(L);
    first(L) = P;
}; //3

void insertLast(List &L, adr P){
    adr Q;
    if (first(L) != NULL){
        Q = first(L);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
            next(Q) = P;
    } else {
        insertFirst(L, P);
    }
}; //4

void deleteFirst(List &L, adr &P){
    if (first(L) != NULL){
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    } else {
        cout << "List Kosong";
    }
}; //6

void deleteLast(List &L, adr P){
    adr Q;
    if (first(L) != NULL){
            if (next(first(L)) != NULL){
                Q = first(L);
                while (next(next(Q)) != NULL){
                    Q = next(Q);
                }
                P = next(Q);
                next(Q) = NULL;
            } else {
                deleteFirst(L, P);
            }
    } else {
        cout << "List Kosong";
    }
}; //7

void show(List L){
    adr p = first(L);
    while (p != NULL){
        cout << info(p) << " ";
        p = next(p);
    };
    cout << endl;
}; //9

adr findInfo(List L, infotype key){
    adr Q;
    Q = first(L);
    while (Q != NULL) {
        if (info(Q) == key) {
            return Q;
        }
        Q = next(Q);
    }
}; //10
