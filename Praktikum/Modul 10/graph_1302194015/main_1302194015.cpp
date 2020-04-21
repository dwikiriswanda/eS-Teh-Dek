#include"header_1302194015.h"

using namespace std;

int main(){
    // inisialisasi Graph G
    graph G;
    createGraph(G);
    cout<<"MEMBUAT NODE PADA GRAF"<<endl;

    // TAMBAHKAN NODE A, B, C, D KE DALAM GRAPH
    addNode(G, 'A');
    addNode(G, 'B');
    addNode(G, 'C');
    addNode(G, 'D');

    // TAMPILKAN ISI GRAPH
    printGraph(G);
    cout<<"\nMEMBUAT EDGE PADA GRAF"<<endl;

    // hubungkan A ke C, A ke D, B ke D, dan D ke C
    connect(G, 'A', 'C');
    connect(G, 'A', 'D');
    connect(G, 'B', 'D');
    connect(G, 'D', 'C');


    cout<<"\nMENAMBAHKAN NODE LAIN PADA GRAF"<<endl;
    addNode(G,'A');
    addNode(G,'B');
    addNode(G,'E');
    addNode(G,'C');
    addNode(G,'H');
    addNode(G,'D');
    addNode(G,'F');
    printGraph(G);

    cout<<"\nMENAMBAHKAN EDGE BARU PADA GRAF"<<endl;
    connect(G,'A','E');
    connect(G,'E','B');
    connect(G,'H','B');
    connect(G,'F','D');
    connect(G,'C','F');
    connect(G,'C','E');
    connect(G,'D','H');
    connect(G,'E','H');
    connect(G,'F','A');
    printGraph(G);

    inDegree(G, 'A');
    inDegree(G, 'B');
    inDegree(G, 'C');
    inDegree(G, 'D');
    inDegree(G, 'E');
    inDegree(G, 'H');
    inDegree(G, 'F');

    return 0;
}
