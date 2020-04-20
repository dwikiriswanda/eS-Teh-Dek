#include "header.h"

void createGraph(adrVertek &Graph){
    Graph = Nil;
};

adrVertek alokasiVertek(infotype label){
    adrVertek P = new vertek;
    info(P) = label;
    firstEdge(P) = Nil;
    next(P) = Nil;
    return P;
};

adrEdge alokasiEdge(){
    adrEdge P = new edge;
    info(P) = Nil;
    next(P) = Nil;
    return P;
};

void insertVertek(adrVertek &Graph, adrVertek P){
    if (Graph == Nil){
        Graph = P;
    } else {
        next(P) = Graph;
        Graph = P;
    }
};

void insertEdge(adrVertek &src, adrVertek &dest){
    adrEdge P = alokasiEdge();
    info(P) = dest;
   if (firstEdge(src) == Nil){
        firstEdge(src) = P;
    } else {
        adrEdge Q = firstEdge(src);
        while (next(Q)!= Nil){
            Q = next(Q);
        }
        next(Q) = P;
    }
};

adrVertek pencarianVertek(adrVertek Graph, infotype X){
    adrVertek P = Graph;
    adrVertek found = Nil;
    while (P != Nil && info(P) != X){
        P = next(P);
    }
    if (info(P) == X){
        found = P;
    }
    return found;
};

void adjacencyVertex(adrVertek Graph, infotype X){
    adrVertek P = pencarianVertek(Graph, X);
    cout << X << " -";
    adrEdge Q = firstEdge(P);
    while (Q != Nil){
        cout << " " << info(info(Q)) << " -";
        Q = next(Q);
    }
    cout << endl;
};

bool isConnected(adrVertek src, adrVertek v){
    adrEdge P = firstEdge(src);
    bool connected = false;
    while (P != Nil){
        if (info(P) == v){
            connected = true;
        }
        P = next(P);
    }
    return connected;
};

bool isLoop (adrVertek src, adrVertek dest){
    if (isConnected(src, dest) && info(src) == info(dest)){
        return true;
    } else {
        return false;
    }
};

int countDegreeIn(adrVertek Graph, adrVertek v){
    adrVertek P = Graph;
    int counter = 0;
    while (P != Nil){
        if (isConnected(P, v) == true){
            counter++;
        }
        P = next(P);
    }
    return counter;
};

int countDegreeOut(adrVertek Graph, adrVertek v){
    adrEdge P = firstEdge(v);
    int counter = 0;
    while (P != Nil){
        counter++;
        P = next(P);
    }
    return counter;
};

void delVertek(adrVertek &Graph, adrVertek v){
    adrVertek P = Graph;
    while (P != Nil){
        if(isConnected(P, v) == true){
            delEdge(P, v);
        }
        P = next(P);
    }
    P = Graph;
    while (next(P) != v){
        P = next(P);
    }
    if (next(P) == v){
        adrVertek Del = next(P);
        next(P) = next(Del);
        Del = Nil;
    }
}; // del vertex v

void delEdge(adrVertek &src, adrVertek &dest){
    adrEdge P = firstEdge(src);
    if (info(P) == dest){
        adrEdge Del = firstEdge(src);
        firstEdge(src) = next(Del);
        Del = Nil;
    } else {
        while(next(P) != Nil && info(next(P)) != dest){
            P = next(P);
        }
        if (info(next(P)) == dest){
        adrEdge Del = next(P);
        next(P) = next(Del);
        Del = Nil;
        }
    }
}; // del edge between src-dest

bool isMultiGraph(adrVertek Graph){
     adrVertek P = Graph;
     bool multi = false;
     while (P != Nil){
        if (isLoop(P, P) && isConnected(P, Graph)){
            multi = true;
         }
            P = next(P);
     }
     return multi;
}; // print simple graph or multi graph

void infoMultiGraph(adrVertek Graph){
    if(isMultiGraph(Graph) == true){
        cout << "Multigraph" << endl;
    } else {
        cout << "Bukan multigraph" << endl;
    }
}; // print simple graph or multi graph

void printGraph(adrVertek Graph){
    adrVertek P = Graph;
    while (P != Nil){
        adjacencyVertex(Graph, info(P));
        P = next(P);
    }
}; // print all vertices and the adjacency
