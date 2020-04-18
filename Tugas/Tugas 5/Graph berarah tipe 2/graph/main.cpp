#include "header.h"

int main()
{
    cout << "Hello world!" << endl;
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
    cout<<"Graph before insert edge: "<<endl;
    printGraph(Graph);
    insertEdge(A, B);
    insertEdge(B, C);
    insertEdge(B, D);
    insertEdge(C, A);
    insertEdge(C, C);
    insertEdge(C, D);
    insertEdge(D, D);
    insertEdge(D, E);
    cout<<"Graph after insert edge: "<<endl;
    printGraph(Graph);
    infoMultiGraph(Graph);
    cout<<"Degree In: "<<endl;
    cout<<"A: "<<countDegreeIn(Graph, A)<<endl;
    cout<<"B: "<<countDegreeIn(Graph, B)<<endl;
    cout<<"C: "<<countDegreeIn(Graph, C)<<endl;
    cout<<"D: "<<countDegreeIn(Graph, D)<<endl;
    cout<<"E: "<<countDegreeIn(Graph, E)<<endl;
    cout<<"Degree Out: "<<endl;
    cout<<"A: "<<countDegreeOut(Graph, A)<<endl;
    cout<<"B: "<<countDegreeOut(Graph, B)<<endl;
    cout<<"C: "<<countDegreeOut(Graph, C)<<endl;
    cout<<"D: "<<countDegreeOut(Graph, D)<<endl;
    cout<<"E: "<<countDegreeOut(Graph, E)<<endl;
    delEdge(C, C);
    delEdge(D, D);
    cout<<"Graph after delete some edge:"<<endl;
    printGraph(Graph);
    infoMultiGraph(Graph);
    delVertek(Graph, C);
    cout<<"Graph after delete Vertek C:"<<endl;
    printGraph(Graph);
    return 0;
}
