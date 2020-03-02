#include "SLL_Circular.h"

void createList(list &L) {
    first(L) = NULL;
}; //1

address createElemen(infotype dataBaru) {
    address P = new elmList;
    info(P) = dataBaru;
    next(P) = NULL;

    return P;
}; //2

void insertFirst(list &L, address P) {
    if (first(L) == NULL) {
        first(L) = P;
        next(P) = first(L);
    } else {
        address Q = first(L);
        while (next(Q) != first(L)) {
            Q = next(Q);
        }
        next(P) = first(L);
        first(L) = P;
        next(Q) = first(L);
    }
}; //3

// MANDIRI
//void insertFirst(list &L, address P) {
//    if (last(L) == NULL) {
//        last(L) = P;
//        next(P) = last(L);
//    } else {
//        address Q = last(L);
//        while (next(Q) != last(L)) {
//            Q = next(Q);
//        }
//        next(P) = last(L);
//        last(L) = P;
//        next(Q) = last(L);
//    }
//}; //3

void insertLast(list &L, address P) {
    if (first(L) == NULL) {
        first(L) = P;
        next(P) = first(L);
    } else {
        address Q = first(L);
        while (next(Q) != first(L)) {
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = first(L);
    }
}; // 4

// MANDIRI
//void insertLast(list &L, address P) {
//    if (last(L) == NULL) {
//        last(L) = P;
//        next(P) = last(L);
//    } else {
//        address Q = last(L);
//        while (next(Q) != last(L)) {
//            Q = next(Q);
//        }
//        next(Q) = P;
//        next(P) = last(L);
//    }
//}; // 4

void insertAfter(list &L, address Prec, address P) {
    if (first(L) == NULL) {
        cout << "Listnya kosong gan" << endl;
    } else if (next(Prec) == first(L)) {
        next(Prec) = P;
        next(P) = first(L);
    } else {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}; //5

void deleteFirst(list &L, address &P) {

    if (first(L) == NULL) {
        cout << "Listnya kosong gan" << endl;
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
        next(Q) = first(L);
    }
}; //6

void deleteLast(list &L, address &P) {
    address Q = first(L);
    while (next(next(Q)) != first(L)) {
        Q = next(Q);
    }
    P = next(Q);
    next(Q) = first(L);
    next(P) = NULL;
}; //7

void deleteAfter(list &L, address Prec, address &P) {
    address Q;
    if (first(L) == NULL) {
        cout << "Listnya kosong gan" << endl;
    } else if (next(Prec) == first(L)) {
        P = first(L);
        while (next(P) != first(L)) {
            Q = P;
            P = next(P);
        }
        next(Q) = first(L);
        next(P) = NULL;
    } else {
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }
}; //8

void printList(list L) {
    address P = first(L);
    if (first(L) == NULL) {
        cout << "Listnya kosong gan" << endl;
    } else {
        P = first(L);
        cout << "<" << info(P).nama << ", " << info(P).prioritas << ", " << info(P).sisa_durasi << ">" << "  ";
        while (next(P) != first(L)) {
            P = next(P);
        cout << "<" << info(P).nama << ", " << info(P).prioritas << ", " << info(P).sisa_durasi << ">" << "  ";
        }
        cout << endl;
    }
}; //9

int panjangList(list L) {
    address P = first(L);
    int panjang = 0;
    do {
        panjang++;
    } while (next(P) != first(L));

    return panjang;
}; //10

address cariElm(list L, string namaProses) {
    address P = first(L);
    while (P != NULL && info(P).nama != namaProses) {
        P = next(P);
    }
    if (P != NULL) {
        return P;
    }

    return NULL;
}; //11


