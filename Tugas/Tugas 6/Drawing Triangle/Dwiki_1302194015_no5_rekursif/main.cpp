#include <iostream>

using namespace std;

string Triangle(int N) {
    string temp;

    if (N == 0) {   // BASE CASE
        return "";
    } else {    // INDUKSI
        temp = "*" + Triangle(N - 1);
        cout << temp << endl;
        return temp;
    }
}

int main()
{
    int N;
    cin >> N;
    Triangle(N);
    return 0;
}
