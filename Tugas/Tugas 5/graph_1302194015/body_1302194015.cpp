#include "header_1302194015.h"

void createGraph(Graph &G){
    G = NULL;
}

addressNode createNode(infotypeNode newInfo){
    addressNode P;
    P = new node;
    info(P) = newInfo;
    next(P) = NULL;
    firstNeighbour(P) = NULL;
    return P;
}

addressNeighbour createNeighbour(infotypeNode newInfo){
    addressNeighbour P;
    P = new neighbour;
    next(P) = NULL;
    info(P) = newInfo;
    next(P) = NULL;
    return P;
}

void insertFirstNeighbour(addressNeighbour P, addressNode pNode){
    if(firstNeighbour(pNode) == NULL){
        firstNeighbour(pNode) = P;
    }else{
        next(P) = firstNeighbour(pNode);
        firstNeighbour(pNode) = P;
    }
}
void deleteFirstNeighbour(addressNode pNode, addressNeighbour &P){
    P = firstNeighbour(pNode);
    if(next(firstNeighbour(pNode)) = NULL){
        firstNeighbour(pNode) = NULL;
    }else{
        firstNeighbour(pNode) = next(P);
        next(P) = NULL;
    }
}

void deleteAfterNeighbour(addressNeighbour prec, addressNeighbour &P){
    P = next(prec);
    next(prec) = next(P);
    next(P) = NULL;
}

void insertLastNode(infotypeNode newInfo, Graph &G){
    addressNode P = createNode(newInfo);
    if(G == NULL){
        G = P;
    }else{
        addressNode Q = G;
        while (next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

addressNode searchNode(infotypeNode infoCari, Graph G){
    addressNode P = G;
    while ((P != NULL) && (info(P) != infoCari)) {
        P = next(P);
    }
    return P;
}

void connect(infotypeNode node1, infotypeNode node2, Graph G){
    if (G == NULL) {
        cout<<"Graph Kosong"<<endl;
    }else {
        addressNode N1 = searchNode(node1, G);
        addressNode N2 = searchNode(node2, G);
        if ((N1 != NULL) && (N2 != NULL)) {
            addressNeighbour pN1 = createNeighbour(node1);
            addressNeighbour pN2 = createNeighbour(node2);
            insertFirstNeighbour(pN1, N2);
            insertFirstNeighbour(pN2, N1);
        }else {
            cout<<"data tidak ditemukan"<<endl;
        }
    }
}

addressNeighbour searchNeighbour(infotypeNode infoCari, addressNode pN){
    addressNeighbour P = firstNeighbour(pN);
    while ((P != NULL) && (info(P) != infoCari)) {
        P = next(P);
    }
    return P;
}

void disconnect(infotypeNode node1, infotypeNode node2, Graph G){
    if (G == NULL) {
        cout<<"Graph Kosong"<<endl;
    } else {
        addressNode N1 = searchNode(node1, G);
        addressNode N2 = searchNode(node2, G);
        if ((N1 != NULL) && (N2 == NULL)) {
            addressNeighbour pN1 = searchNeighbour(node1, N2);
            addressNeighbour pN2 = searchNeighbour(node1, N2);
            if (pN1 == firstNeighbour(N2)) {
                deleteFirstNeighbour(N2, pN1);
            }else {
                addressNeighbour prec = firstNeighbour(N2);
                while (next(prec)!= pN1) {
                    prec = next(prec);
                }
                deleteAfterNeighbour(prec, pN1);
            }
            if (pN2 == firstNeighbour(N1)) {
                deleteFirstNeighbour(N1, pN2);
            }else {
                addressNeighbour prec = firstNeighbour(N1);
                while (next(prec)!= pN2) {
                    prec = next(prec);
                }
                deleteAfterNeighbour(prec, pN2);
            }
        }else {
            cout<<"data tidak ditemukan"<<endl;
        }
    }
}

void printGraph(Graph G){
    if (G == NULL){
        cout<<"Graph Kosong"<<endl;
    }else{
        addressNode P = G;
        cout<<"[";
        while (P != NULL) {
            cout<<"Node "<<info(P)<<" : ";
            addressNeighbour Q = firstNeighbour(P);
            while (Q != NULL) {
                cout<<info(Q)<<", ";
                Q = next(Q);
            }
            if (Q == NULL){
                cout<<"null, ";
            }
            P = next(P);
        }
        cout<<"]"<<endl;
    }
}
