#include"header_1302194015.h"

using namespace std;

int main()
{
    char NIM[11]= "1302194015";
    char Nama[50] = "Muhamad Dwiki Riswanda";
    char Kelas[20] = "SE-43-03";
    cout << " -----------------------------------"<<endl;
    cout << " Assessment CLO 2 - STACK dan QUEUE"<<endl;
    cout << " -----------------------------------"<<endl;
    cout << " NIM : "<< NIM <<"\n Nama : "<<Nama<<"\n Kelas : "<<Kelas<<endl;
    cout << " -----------------------------------"<<endl;
    stack S;
    createStack(S);
    printStack(S);
    push(S,43);
    push(S,430);
    push(S,4300);
    push(S,43000);
    push(S,430000);
    push(S,4300000);
    printStack(S);
    cout<<"\n hapus data 123 "<<endl;
    infotype y = 123;
    deleteData(S,y);
    cout<<endl;
    printStack(S);
    cout<<"\n hapus data 4300 "<<endl;
    y = 4300;
    deleteData(S,y);
    cout<<endl;
    printStack(S);
    cout<<"\n hapus data 43 "<<endl;
    y = 43;
    deleteData(S,y);
    cout<<endl;
    printStack(S);
    return 0;
}
