#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#define info(p) (p)->info
#define next(p) (p)->next
#define firstEdge(p) (p)->firstEdge
#define Nil NULL

using namespace std;

typedef char infotype;
typedef struct vertek *adrVertek;
typedef struct edge *adrEdge;

struct vertek {
 infotype info;
 adrVertek next;
 adrEdge firstEdge;
};

struct edge {
 adrVertek info;
 adrEdge next;
};

void createGraph(adrVertek &Graph);
adrVertek alokasiVertek(infotype label);
adrEdge alokasiEdge();
void insertVertek(adrVertek &Graph, adrVertek P);
void insertEdge(adrVertek &src, adrVertek &dest);
adrVertek pencarianVertek(adrVertek Graph, infotype X);
void adjacencyVertex(adrVertek Graph, infotype X);
bool isConnected(adrVertek src, adrVertek dest);
bool isLoop(adrVertek src, adrVertek dest);
int countDegreeIn(adrVertek Graph, adrVertek v);
int countDegreeOut(adrVertek Graph, adrVertek v);
void delVertek(adrVertek &Graph, adrVertek v); // del vertex v
void delEdge(adrVertek &src, adrVertek &dest); // del edge between src-dest
bool isMultiGraph(adrVertek Graph); // return true if multi graph
void infoMultiGraph(adrVertek Graph); // print simple graph or multi graph
void printGraph(adrVertek Graph); // print all vertices and the adjacency

#endif // HEADER_H_INCLUDED
