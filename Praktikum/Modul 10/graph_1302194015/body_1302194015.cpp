#include"header_1302194015.h"

void createNode(char x, adrNode &P){
    P = new node;
    P->info = x;
    P->next = NULL;
    P->firstEdge = NULL;
}

void createGraph(graph &g){
    g.column = NULL;
    g.row = NULL;
}

void insertLast(adrNode &first, adrNode p){
    adrNode q;
    if (first == NULL){
        first = p;
    }else {
        q = first;
        while(q->next != NULL){
            q = q->next;
        }
        q->next = p;
    }
}

void addNode(graph &g, char x){
    adrNode p;
    createNode(x, p);
    insertLast(g.column, p);
    createNode(x, p);
    insertLast(g.row, p);
}

adrNode findNode(adrNode first, char x){
    adrNode p;

    p = first;
    while(p != NULL){
        if(p->info == x){
            return p;
        }
        p = p->next;
    }
    return NULL;
}

void connect(graph &g, char x, char y){
    adrNode src, dest;
    adrEdge p;

    src = findNode(g.row, x);
    dest = findNode(g.column, y);

    if(x != NULL && y != NULL){
        p = new edge;
        p->info = dest;
        p->next = NULL;
        if(src->firstEdge != NULL){
            p->next = src->firstEdge;
        }
        src->firstEdge = p;
    }
}

void printGraph(graph g){
    adrNode p = g.row;
    if(g.row = NULL){
        cout << "Graph Kosong";
    }else{
        while(p != NULL){
            cout << p->info << " - ";
            adrEdge q = p->firstEdge;
            while(q != NULL){
                cout << q->info->info << " - ";
                q = q->next;
            }
            p = p->next;
            cout << endl;
        }
    }
}

int inDegree(graph g, char v){
    if(g.row == NULL || g.column == NULL){
        return 0;
    } else {
        adrNode p = g.row;
        adrEdge q;
        int hitung = 0;
        while(p != NULL){
            q = p->firstEdge;
            while(q != NULL){
                if(q->info->info == v){
                    hitung++;
                }
                q = q->next;
            }
            p = p->next;
        }
        return hitung;
    }
}
