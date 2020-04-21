#include"header_1302194015.h"

void createStack(stack &S){
    (S).Top = -1;
}

void push(stack &S, infotype X ){
    if ( (S).Top >= 4 ) {
        cout<<"Stack Penuh";
    }else if ( (S).Top <= 4){
        (S).Top = (S).Top + 1;
        (S).info[(S).Top] = X;
    }
}

void pop(stack &S, infotype X){
    if ( (S).Top == -1 ) {
        cout<<"Stack Kosong";
    }else if ( (S).Top > -1 ){
        X = (S).info[(S).Top];
        (S).Top = (S).Top - 1;
    }
}

void printStack(stack S){
    int i;
    for(i = S.Top; i >= 0; i--){
        cout<<(S.info[i])<<" | ";
    }

}

void deleteData(stack &S,infotype x){
        int a = Top(S);
    while ((x >=0) && (info(S)[a] != x)) {
        a--;
    }
    if (a <= -1) {
        cout<<"Data tidak ditemukan"<<endl;
    }else {
        pop(S, x);
        cout<<"Delete berhasil"<<endl;
    }
}
