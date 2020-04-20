#include "header.h"

int main()
{
    adrVertek Graph;
    createGraph(Graph);
    adrVertek A, B, C, D, E;
    A = alokasiVertek('A');
    insertVertek(Graph, A);
    B = alokasiVertek('B');
    insertVertek(Graph, B);
    C = alokasiVertek('C');
    insertVertek(Graph, C);
    D = alokasiVertek('D');
    insertVertek(Graph, D);
    E = alokasiVertek('E');
    insertVertek(Graph, E);

    cout << "==================================================" << endl;
    cout << "Graph sebelum di insert Edge: " << endl;
    printGraph(Graph);
    cout << "==================================================" << endl;

    cout << "Graph sesudah di insert Edge: " << endl;
    insertEdge(A, B);
    insertEdge(B, C);
    insertEdge(C, D);
    insertEdge(D, E);
    insertEdge(B, D);
    insertEdge(C, A);
    insertEdge(C, C);
    insertEdge(D, D);
    printGraph(Graph);
    cout << "Apakah Graph tersebut Multigraph? ";
    infoMultiGraph(Graph);
    cout << "==================================================" << endl;

    cout << "Banyaknya Degree In: " << endl;
    cout << "Vertek A: " << countDegreeIn(Graph, A) << endl;
    cout << "Vertek B: " << countDegreeIn(Graph, B) << endl;
    cout << "Vertek C: " << countDegreeIn(Graph, C) << endl;
    cout << "Vertek D: " << countDegreeIn(Graph, D) << endl;
    cout << "Vertek E: " << countDegreeIn(Graph, E) << endl;
    cout << "==================================================" << endl;
    cout << "Banyaknya Degree Out: " << endl;
    cout << "Vertek A: " << countDegreeOut(Graph, A) << endl;
    cout << "Vertek B: " << countDegreeOut(Graph, B) << endl;
    cout << "Vertek C: " << countDegreeOut(Graph, C) << endl;
    cout << "Vertek D: " << countDegreeOut(Graph, D) << endl;
    cout << "Vertek E: " << countDegreeOut(Graph, E) << endl;
    cout << "==================================================" << endl;

    cout << "Graph sesudah di delete beberapa Edge:" << endl;
    delEdge(C, C);
    delEdge(D, D);
    printGraph(Graph);

    cout << "Graph sesudah di delete Vertek C:" << endl;
    delVertek(Graph, C);
    printGraph(Graph);
    cout << "Apakah Graph tersebut Multigraph? ";
    infoMultiGraph(Graph);
    cout << "==================================================" << endl;
    return 0;
}
