#include "slldll.h"

using namespace std;

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
}; //1

address createElemen(infotype dataBaru){
    address P = new elmList;
    info(P) = dataBaru;
    P->next = NULL;
    return P;
}; //2

void insertFirst(List &L, address P){
    if (first(L) == NULL){
        first(L) = P;
        last(L) = P;
    } else {
        P->next = first(L);
        first(L) = P;
    }
}; //3

void insertAfter(address Prec, address P){
    P->next = Prec->next;
    Prec->next = P;
}; //5

void deleteFirst(List &L, address &P){
    P = first(L);
    if (first(L)->next == NULL){
        first(L) == NULL;
        last(L) == NULL;
    } else {
        first(L) = first(L)->next;
        P->next = NULL;
    }
}; //7

void deleteAfter(List &L, address Prec, address &P){
    P = Prec->next;
    Prec->next = P->next;
    P->next = NULL;
}; //9

void printList(List L){
    address P;
    P = first(L);
    while (P != NULL){
        cout << info(P) << endl;
        P = P->next;
    }
}; //11

void insertLast(List &L, address P){
    address Q;
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

void insertDescending(List &L, infotype dataBaru){

    address P = createElemen(dataBaru);
    address Q;

    if (P->info > L.first->info){
        insertFirst(L, P);
    }
    if (P->info < L.last->info){
        insertLast(L, P);
    }
    while((Q->next)->info > P->info){
        Q = Q->next;
    }
    insertAfter(Q, P);

}; //6

void deleteLast(List &L, address &P){
    address Q;
    if (L.first != NULL){
            if (L.first->next != NULL){
                Q = L.first;
                while ((Q->next)->next != NULL){
                    Q = Q->next;
                }
                P = Q->next;
                Q->next = NULL;
            } else {
                deleteFirst(L, P);
            }
    } else {
        cout << "List Kosong";
    }
}; //8

void deleteElm(List &L, infotype dataHapus){
    address P;
    if (L.first->info == dataHapus){
        deleteFirst(L, P);
    }
    if (L.last->info == dataHapus){
        deleteLast(L, P);
    } else {
        address Q = L.first;

        while (Q != NULL && Q->next->info != dataHapus){
            Q = Q->next;
        }
        if (Q != NULL){
            deleteAfter(L, P)
        }
    }

}; //10
