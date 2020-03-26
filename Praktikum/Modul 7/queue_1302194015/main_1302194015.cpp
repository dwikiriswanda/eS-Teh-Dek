#include"queue_1302194015.h"
#include <iostream>

using namespace std;


int main() {
    Queue Q;
    createQueue(Q);
    masukkanTransaksi(Q, "Andi Transfer Doni 50.000");
    printQueue(Q);
    masukkanTransaksi(Q, "Doni Transfer Saras 10.000");
    printQueue(Q);
    masukkanTransaksi(Q, "Tono Transfer Bill 20.000");
    printQueue(Q);
    prosesTransaksi(Q);
    printQueue(Q);

    return 0;
}
