#include "locker.h"

void add_data(locker &l, int x){
    l.num = l.num+1;
    if (l.num != l.max) {
        l.data[l.num] = x;
    }
};

void view_data(locker l){
    int i = 0;
    while (i <= l.num){
        cout << l.data[i];
        i++;
    }
    cout << endl;
};

int search_data(locker l, int x){
    int i = 0;
    while (i <= l.num) {
        if (l.data[i] == x){
            return i;
        }
        i++;
    }
    return -1;
};
