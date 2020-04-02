#include"header_1302194015.h"

using namespace std;

int main()
{
    string NIM = "1302194015";
    string Nama = "Muhamad Dwiki Riswanda";
    string Kelas = "SE-43-03";
    cout << " -----------------------------------"<<endl;
    cout << " Assessment CLO 2 - STACK dan QUEUE"<<endl;
    cout << " -----------------------------------"<<endl;
    cout << " NIM : "<< NIM <<"\n Nama : "<<Nama<<"\n Kelas : "<<Kelas<<endl;
    cout << " -----------------------------------"<<endl;
    Queue Q;
    int ukuran;
    int no;
    string file;
    createQueue(Q);
    printQueue(Q);
    cout<<"\nadd A ukuran 20"<<endl;
    kirimData(Q,20,"A");
    printQueue(Q);
    cout<<"\nadd C ukuran 5"<<endl;
    kirimData(Q,5,"C");
    printQueue(Q);
    cout<<"\nadd E ukuran 16"<<endl;
    kirimData(Q,16,"E");
    printQueue(Q);
    cout<<"\nadd X ukuran 13"<<endl;
    kirimData(Q,13,"X");
    printQueue(Q);
    cout<<"\nadd B ukuran 50"<<endl;
    kirimData(Q,50,"B");
    printQueue(Q);
    cout<<"\ndel Queue 1"<<endl;
    Del(Q,ukuran,no,file);
    cout<<"del Queue 2"<<endl;
    Del(Q,ukuran,no,file);
    cout<<"del Queue 3"<<endl;
    Del(Q,ukuran,no,file);
    cout<<"del Queue 4"<<endl;
    Del(Q,ukuran,no,file);
    cout<<"del Queue 5"<<endl;
    Del(Q,ukuran,no,file);
    cout<<"del Queue 6"<<endl;
    Del(Q,ukuran,no,file);
    cout<<"del Queue 7"<<endl;
    Del(Q,ukuran,no,file);
    printQueue(Q);
    cout<<"\nadd K ukuran 20"<<endl;
    kirimData(Q,20,"K");
    printQueue(Q);
    cout<<"\nadd L ukuran 5"<<endl;
    kirimData(Q,5,"L");
    printQueue(Q);
    cout<<"\nadd M ukuran 16"<<endl;
    kirimData(Q,16,"M");
    printQueue(Q);
    cout<<"\nadd N ukuran 13"<<endl;
    kirimData(Q,13,"N");
    printQueue(Q);

    return 0;
}
