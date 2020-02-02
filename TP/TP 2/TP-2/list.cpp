#include <iostream>
#include "list.h"

/*
Name : Muhamad Dwiki Riswanda
NIM : 1302194015
*/

using namespace std;

void createList(List &L){
    first(L) = NULL;
}

address allocate(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst(List &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void printInfo(List L){
    address p = first(L);
    while (p != NULL){
        cout << info(p);
        p = next(p);
    };
    cout << endl;
}

void deleteFirst(List &L, address &P){
    if (first(L) != NULL){
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

//SESI HAVE FUN

void insertLast(List &L, address P){
    address temp;

    if (first(L) != NULL){
        temp = first(L);
        while (next(temp) != NULL){
            temp = next(temp);
        }
        next(temp) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertAfter(List &L, address key, address P){
    address temp;

    if (first(L) != NULL){
        temp = first(L);
        while (info(temp) != info(key)){
            temp = next(temp);
        }
    }
    if (info(temp) == info(key)){
        next(P) = next(temp);
        next(temp) = P;

    } else {
        next(temp) = NULL;
        cout << "Key Not Found" << endl;
    }
}

void deleteLast(List &L){
    address P;
    address Q;

    if (first(L) != NULL){
        P = first(L);
        while (next(P) != NULL){
            Q = P;
            P = next(P);
        }
        next(Q) = NULL;
    }
}

void deleteAfter(List &L, address key){
    address P;
    address Q;
    if (first(L) != NULL){
        P = first(L);
        Q = next(P);
        while ((info(P) != info(key)) && (next(P) != NULL)) {
            P = next(P);
            Q = next(P);
        }
        if (info(P) == info(key)){
            next(P) = next(Q);
            next(Q) = NULL;
        } else {
            next(Q) = NULL;
        }
    }
}

infotype searchInfo(List L, address key){
    address temp;
    if (first(L) != NULL){
        temp = first(L);
        while ((info(temp) != info(key)) && (next(temp) != NULL)){
            temp = next(temp);
        }
        if (info(temp) == info(key)){
            return info(temp);
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
