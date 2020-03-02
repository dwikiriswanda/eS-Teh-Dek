#include "SLL_Circular.h"

using namespace std;

int main()
{
    list L;
    address P;
    address Q;
    infotype proses;

    createList(L);
    printList(L);
    proses.nama = "word"; proses.prioritas = 5; proses.sisa_durasi = 10;
    P = createElemen(proses);
    insertLast(L, P);
    printList(L);

    proses.nama = "excel"; proses.prioritas = 4; proses.sisa_durasi = 20;
    P = createElemen(proses);
    insertLast(L, P);
    printList(L);

    proses.nama = "dota"; proses.prioritas = 100; proses.sisa_durasi = 30;
    P = createElemen(proses);
    insertFirst(L, P);
    printList(L);

    deleteLast(L, P);
    printList(L);

    deleteFirst(L, P);
    printList(L);

    deleteFirst(L, P);
    deleteFirst(L, P);
    deleteFirst(L, P);
    printList(L);

    Q = cariElm(L, "dota");
    proses.nama = "sinchan"; proses.prioritas = 50; proses.sisa_durasi = 30;
    P = createElemen(proses);
    insertAfter(L, Q, P);
    printList(L);
    deleteAfter(L, Q, P);
    printList(L);

    proses.nama = "sinchan"; proses.prioritas = 50; proses.sisa_durasi = 30;
    P = createElemen(proses);
    insertFirst(L, P);
    printList(L);

    return 0;
}

// Jelaskan apa perbedaannya yang paling terlihat pada implementasi insertFirst dan insertLast antara
// menggunakan pointer First dan menggunakan pointer Last dalam struktur List!
// JAWAB :
// ya beda logikanya, jadi harus mikir dulu dan saya pusiiinggg
