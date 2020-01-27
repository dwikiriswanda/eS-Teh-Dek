#include <iostream>

using namespace std;

const int nMax = 37;

struct THimpunan{
    int anggota [nMax - 1];
    int panjang;
};

bool anggotaHimpunan(THimpunan himp, int oby){
    bool found;
    found = false;
    int k = 0;
    while (k <= himp.panjang && !found){
        found = oby == himp.anggota[k];
        k++;
    }
    return found;
}

void inputAnggotaHimpunan(THimpunan &himp) {
    int bilangan;
    himp.panjang = -1;
    cin >> bilangan;
    while(himp.panjang < nMax - 1 && !anggotaHimpunan(himp, bilangan)){
        himp.panjang = himp.panjang + 1;
        himp.anggota[himp.panjang] = bilangan;
        cin >> bilangan;
    }
}

void urutAnggotaHimpunan(THimpunan &himp) {
    int pass, i, idx_min, temp;

    pass = 1;
    while(pass <= himp.panjang - 1) {
        idx_min = pass - 1;
        i = pass;
        while(i <= himp.panjang - 1) {
            if(himp.anggota[idx_min] > himp.anggota[i]){
                idx_min = i;
            }
                i++;
        }
        temp = himp.anggota[pass - 1];
        himp.anggota[pass - 1] = himp.anggota[idx_min];
        himp.anggota[idx_min] = temp;
        pass++;

    }
}

bool himpunanSama(THimpunan himp1, THimpunan himp2) {
    bool similar;
    int k;

    urutAnggotaHimpunan(himp1);
    urutAnggotaHimpunan(himp2);

    similar = himp1.panjang == himp2.panjang;
    k = 0;
    while (k < himp1.panjang && similar) {
        similar = himp1.anggota[k] == himp2.anggota[k];
        k++;
    }
    return similar;
}

int main()
{
    THimpunan set1, set2;
    cout << "Anggota himpunan 1: ";
    inputAnggotaHimpunan(set1);
    cout << "Anggota himpunan 2: ";
    inputAnggotaHimpunan(set2);
    cout << "Himpunan 1 = Himpunan 2? ";
    if (himpunanSama(set1, set2)){
        cout << "True";
    }else {
        cout << "False";
    }

    return 0;
}
