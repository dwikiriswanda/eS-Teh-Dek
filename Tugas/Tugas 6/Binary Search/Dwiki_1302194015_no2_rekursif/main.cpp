#include <iostream>

using namespace std;

typedef int tabInt[];

int biSearch(tabInt T, int X, int kiri, int kanan) {
    int tengah;

    tengah = (kiri + kanan) / 2;
    if (kiri > kanan) { // BASE CASE 1
        return -1;
    } else if (X == T[tengah]) {  // BASE CASE 2
        return tengah;
    } else if (X > T[tengah]) { // INDUKSI 1
        return biSearch(T, X, tengah + 1, kanan);
    } else if (X < T[tengah]) { // INDUKSI 2
        return biSearch(T, X, kiri, tengah - 1);
    }
}

int main()
{
    int T[] = {12, 30, 32, 55, 65, 73, 99};
    int N = 7;
    cout << biSearch(T, 5, 0, N - 1);
    return 0;
}

