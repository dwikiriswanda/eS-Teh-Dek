#ifndef HEADER_1302194015_H_INCLUDED
#define HEADER_1302194015_H_INCLUDED
#define next(P) P->next
#define info(P) P->info
#define firstEdge(P) P->firstEdge
#define column(G) G.column
#define row(G) G.row
#include <iostream>

using namespace std;

typedef struct node *adrNode;
typedef struct edge *adrEdge;

struct node{
    char info;
    adrNode next;
    adrEdge firstEdge;
};

struct edge{
    adrEdge next;
    adrNode info;
};

struct graph{
    adrNode column;
    adrNode row;
};

void createNode(char x, adrNode &P);
void createGraph(graph &G);
void insertLast(adrNode &first, adrNode P);
void addNode(graph &G, char x);
adrNode findNode(adrNode first, char x);
void connect(graph &G, char x, char y);
void printGraph(graph G);
int inDegree(graph G, char v);

#endif // HEADER_1302194015_H_INCLUDED
