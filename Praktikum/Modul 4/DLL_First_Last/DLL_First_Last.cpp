#include "DLL_First_Last.h"

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
};//1

address createElemen(infotype dataBaru){
    address P = new elmList;
    info(P) = dataBaru;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
};//2

void insertLast(List &L, address P){
    if (first(L) == NULL){
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
};//4

void insertAfter(address Prec, address P){
    next(P) = next(Prec);
    prev(next(Prec) = P);
    next(Prec) = P;
    prev(P) = Prec;
};//5

void deleteFirst(List &L, address &P){
    P = first(L);
    if (next(first(L)) == NULL){
        first(L) = NULL;
        last(L) = NULL;
    } else {
        first(L) = next(first(L));
        prev(first(L)) = NULL;
        next(P) = NULL;

    }
};//7

void deleteAfter(address Prec, address &P){
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P) = Prec);
    next(P) = NULL;
    prev(P) = NULL;
};//9

void printList(List &L){
    address P = first(L);
    while (P != NULL){
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
};//11

void insertFirst(List &L, address P){
    next(P) = first(L);
    prev(first(L)) = P;
    first(L) = P;
};//3

void insertAscending(List &L, infotype dataBaru){
    address P = createElemen(dataBaru);

    if (first(L) == NULL){
        insertLast(L, P);
    } else if (info(P) <= info(first(L))){
        insertFirst(L, P);
    } else if (info(P) >= info(last(L))){
        insertLast(L, P);
    } else {
        address Q = first(L);
        while (info(next(Q)) <= info(P)){
            Q = next(Q);
        }
        insertAfter(Q, P);
    }
};//6

void deleteLast(List &L, address &P){
    P = last(L);
    last(L) = prev(last(L));
    prev(P) = NULL;
    next(last(L)) = NULL;
};//8

void deleteElm(List &L, infotype dataHapus){
    address P;

    if (first(L) == NULL){
        cout << "kosong gan";
    } else if (info(first(L)) == dataHapus){
        deleteFirst(L, P);
    } else if (info(last(L)) == dataHapus){
        deleteLast(L, P);
    } else {
        address Q = first(L);
        while (info(next(Q)) != dataHapus){
            Q = next(Q);
        }
        deleteAfter(Q, P);
    }
};//10

bool findElemen(List L, infotype dataDicari){
    address P = first(L);
    bool found = false;

    while (P != NULL && info(P) != dataDicari){
        P = next(P);
    }
    if (info(P) == dataDicari){
            found = true;
    }

    return found;
};//12
int frequencyofElm(List L, infotype dataDicari){
    address P = first(L);
    int muncul = 0;

    while (P != NULL){
        if (info(P) == dataDicari){
            muncul = muncul + 1;

        }
        P = next(P);
    }

    return muncul;
};//13
