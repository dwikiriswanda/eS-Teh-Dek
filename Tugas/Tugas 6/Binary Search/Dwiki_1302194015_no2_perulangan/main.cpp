#include <iostream>

using namespace std;

typedef int tabInt[];

int biSearch(tabInt T, int X, int N) {
    int status, tengah, kiri, kanan;

    kiri = 0;
    kanan = N - 1;
    status = -1;    // asumsi tidak ketemu
    while (kiri <= kanan && status == -1) {
        tengah = (kiri + kanan) / 2;
        if (X > T[tengah]) {
            kiri = tengah + 1;
        } else if (X < T[tengah]) {
            kanan = tengah - 1;
        } else {
            status = tengah;
        }
    }
    return status;
}

int main()
{
    int T[] = {12, 30, 32, 55, 65, 73, 99};
    int N = 7;
    cout << "Jadi angka tersebut berada pada indeks ke- ";
    cout << biSearch(T, 65, N);
    return 0;
}
