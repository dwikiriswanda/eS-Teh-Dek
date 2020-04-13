#ifndef HEADER_1302194015_H_INCLUDED
#define HEADER_1302194015_H_INCLUDED
#include <iostream>
#define info(P) P->info
#define next(P) P->next
#define firstNeighbour(P) P->firstNeighbour

using namespace std;

typedef int infotypeNode;
typedef struct node *addressNode;
typedef struct neighbour *addressNeighbour;

struct node{
    infotypeNode info;
    addressNode next;
    addressNeighbour firstNeighbour;
};

struct neighbour{
    infotypeNode info;
    addressNeighbour next;
};

typedef addressNode Graph;

void createGraph(Graph &G);
addressNode createNode(infotypeNode newInfo);
addressNeighbour createNeighbour(infotypeNode newInfo);
void insertFirstNeighbour(addressNeighbour p, addressNode pNode);
void deleteFirstNeighbour(addressNode pNode, addressNeighbour &P);
void deleteAfterNeighbour(addressNeighbour prec, addressNeighbour &P);
void insertLastNode(infotypeNode newInfo, Graph &G);
addressNode searchNode(infotypeNode infoCari, Graph G);
void connect(infotypeNode node1, infotypeNode node2, Graph G);
addressNeighbour searchNeighbour(infotypeNode infoCari, addressNode pN);
void disconnect(infotypeNode node1,infotypeNode node2, Graph G);
void printGraph(Graph G);

#endif // HEADER_1302194015_H_INCLUDED
