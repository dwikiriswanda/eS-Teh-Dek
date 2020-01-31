#ifndef LOCKER_H_INCLUDED
#define LOCKER_H_INCLUDED
#include <iostream>

using namespace std;

struct locker{
    int data[100];
    int max;
    int num;
};

void add_data(locker &l, int x);
void view_data(locker l);
int search_data(locker l, int x);


#endif // LOCKER_H_INCLUDED
