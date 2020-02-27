#include "circulardll-first.h"

/*
Name    : Muhamad Dwiki Riswanda
NIM     : 1302194015
*/

bool isEmpty(list L) {
    if (first(L) == NULL) {
        return true;
    } else {
        return false;
    }
}; //1

void createList(list &L) {
    first(L) = NULL;
}; //2

void createNewElmt(address &P, infotype X) {
    P = new elmList;
    prev(P) = NULL;
    info(P) = X;
    next(P) = NULL;
}; //3

void insertFirst(list &L, address P) {
    if (isEmpty(L) == true) {
        first(L) = P;
        next(P) = first(L);
    } else {
        address Q = first(L);
        while (next(Q) != first(L)) {
            Q = next(Q);
        }
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
        next(Q) = first(L);
    }
}; // 4

void insertAfter(list &L, address &P, address Prec) {
    if (isEmpty(L) == true) {
        cout << "Data kosong gan" << endl;
    } else if (next(Prec)== first(L)){
        next(Prec) = P;
        prev(P) = P;
        next(P) = first(L);
     } else {
        next(P) = next(Prec);
        prev(P) = Prec;
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
}; //5

void deleteFirst(list &L, address &P) {
    if (isEmpty(L) == true) {
        cout << "Kosong listnya, gan";
        cout << endl;
        P = NULL;
    } else if (next(first(L)) == first(L)) {
        P = first(L);
        first(L) = NULL;
    } else {
        address Q = first(L);
        while (next(Q) != first(L)) {
            Q = next(Q);
        }
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
        next(Q) = first(L);
    }
}; //6

void deleteAfter(list &L, address &P, address Prec) {
    address Q;
    if (isEmpty(L) == true) {
        cout << "Listnya kosong gan";
        cout << endl;
        P = NULL;
    } else if (next(Prec) == first(L)) {
        P = first(L);
        while (next(P) != first(L)){
            Q = P;
            P = next(P);
        }
        next(Q) = first(L);
        prev(P) = NULL;
        next(P) = NULL;

    }  else  {
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        next(P) = NULL;
        prev(P) = NULL;
    }
}; //7

int countWord(char data[], list L) {
    address P;
    int i = 0;
    P = first(L);
    while (next(P) != first(L)) {
        if (info(P) == data[0]) {
            i = i + 1;
        }
        P = next(P);
    }
    if (info(P) == data[0]) {
        i = i + 1;
    }

    return i;
}; //8

void printInfo(list L) {
    address P = first(L);
    if (first(L) == NULL){
        cout << "List kosong" << endl;
    } else {
        P = first(L);
        cout << info(P) <<" ";
        while (next(P) != first(L)) {
            P = next(P);
            cout << info(P) << " ";
        }
    }
}; //9

void insertLast(list &L, address P) {
    if (isEmpty(L) != true) {
        address Q = first(L);
        while (next(Q) != first(L)) {
            Q = next(Q);
        }
        next(Q) = P;
        prev(P) = Q;
        next(P) = first(L);
    } else {
        first(L) = P;
        next(P) = first(L);
    }
}; //10

address cariElmt(list L, infotype X) {
    address P = first(L);
    while (P != NULL && info(P) != X) {
        P = next(P);
    }
    if (P != NULL) {
        return P;
    }

    return NULL;
}; //11
