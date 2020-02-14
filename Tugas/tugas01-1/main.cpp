#include <iostream>

using namespace std;

int main()
{
    struct titik{
        int koordinatX;
        int koordinatY;
    };

    titik titik1;
    titik1.koordinatX = 0;
    titik1.koordinatY = 0;

    titik titik2;
    titik2.koordinatX = 3;
    titik2.koordinatY = 0;

    titik titik3;
    titik3.koordinatX = 0;
    titik3.koordinatY = 4;
    cout << "===================" << endl;
    cout << "Segitiga Phytagoras" << endl;
    cout << "===================" << endl;
    cout << "Titik ke-1: " << "(" << titik1.koordinatX << ", " << titik1.koordinatY << ")" << endl;
    cout << "Titik ke-2: " << "(" << titik2.koordinatX << ", " << titik2.koordinatY << ")" << endl;
    cout << "Titik ke-3: " << "(" << titik3.koordinatX << ", " << titik3.koordinatY << ")" << endl;


    return 0;
}
