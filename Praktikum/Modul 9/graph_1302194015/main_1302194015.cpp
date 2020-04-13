#include "header_1302194015.h"

using namespace std;

int main()
{

    Graph G;

    createGraph(G);
    printGraph(G);

    insertLastNode(17, G);
    insertLastNode(18, G);
    insertLastNode(19, G);
    insertLastNode(20, G);
    printGraph(G);

    connect(17,18,G);
    printGraph(G);

    connect(17,19,G);
    connect(18,19,G);
    connect(18,20,G);
    printGraph(G);

    disconnect(18,20,G);
    printGraph(G);

    disconnect(18,19,G);
    printGraph(G);

    disconnect(18,17,G);
    printGraph(G);

    disconnect(19,17,G);
    printGraph(G);

    return 0;
}
