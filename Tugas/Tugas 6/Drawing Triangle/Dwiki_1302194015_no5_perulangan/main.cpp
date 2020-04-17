#include <iostream>

using namespace std;

void Triangle(int N) {
    int i;
    string temp;

    i = N;
    temp = "";
    while (i >= 1) {
        temp = temp + "*";
        cout << temp << endl;
        i--;
    }
}

int main()
{
    int N;
    cout << "Masukkan bilangan: ";
    cin >> N;
    Triangle(N);
    return 0;
}
