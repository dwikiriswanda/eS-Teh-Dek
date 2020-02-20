#include "DLL_First_Last.h"

void createList(list &L){
    first(L) = NULL;
    last(L) = NULL;
}

address createElemen(infotype dataBaru){
    address P;
    P = new elmList;
    info(P) = dataBaru;
    next(P) = NULL;
    prev(P) = NULL;

    return P;
}

void insertLast(list &L, address P){
    if (first(L) == NULL){
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void insertAfter(address Prec, address P){
    next(P) = next(Prec);
    prev(next(Prec)) = P;
    next(Prec) = P;
    prev(P) = Prec;
}

void deleteFirst(list &L, address &P){
    P = first(L);
    if (next(first(L)) == NULL){
        first(L) = NULL;
        last(L) = NULL;
    } else {
        first(L) = next(first(L));
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
}

void deleteAfter(address Prec, address P){
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    next(P) = NULL;
    prev(P) = NULL;
}

void printList(list L){
    address P;
    P = first(L);
    while (P != NULL){
        cout<<info(P)<<" ";
        P = next(P);
    }
    cout<<endl;
}

void insertFirst(list &L, address P){
    if (first(L) == NULL){
        first(L) = P;
        last(L) = P;
    } else {
         next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }

}

void insertAscending(list &L, infotype dataBaru){
    address P = createElemen(dataBaru);
    if (first(L) == NULL || info(P) <= info(first(L))){
        insertFirst(L, P);
    } else if ( (info(P) >= info(first(L)) && next(first(L)) == NULL) || (info(P) >= info(last(L)))  ){
        insertLast(L, P);
    } else {
        address Q = first(L);
        while (info(P) >= info(Q) && Q != NULL){
            Q = next(Q);
        }
        insertAfter(Q, P);
    }
}

void deleteLast(list &L, address P){
    last(L) = prev(last(L));
    prev(P) = NULL;
    next(last(L)) = NULL;
}

void deleteElm(list &L, infotype dataHapus){
    address P = first(L);
    while (P != NULL && dataHapus  != info(P)){
        P = next(P);
    }
    delete P;
}

bool findElemen(list L, infotype dataDicari){
    int i = 0;
    address P = first(L);
    while (P != NULL && dataDicari != info(P)){
        P = next(P);
        if (info(P) == dataDicari){
            i = i + 1;
        }
    }
    if (P != NULL && dataDicari != info(P)){
        return false;
    } else {
        return true;
    }
}

int frequencyofElm(list L, infotype dataDicari){
    int i = 0;
    address P = first(L);
    while (P != NULL && dataDicari != info(P)){
        P = next(P);
        if (info(P) == dataDicari){
            i = i + 1;
        }
    }
    if (P == NULL ){
        cout<<"elemen tidak ditemukan"<<endl;
        cout<<"jumlah elemen "<<i<<endl;
    } else {
        cout<<"elemen ditemukan"<<endl;
        cout<<"jumlah elemen "<<i<<endl;
    }

    return i;
}
