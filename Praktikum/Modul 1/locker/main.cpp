#include "locker.cpp"

int main(){
 locker storage;
 storage.max = 8;
 storage.num = -1;
 add_data( storage, 6 );
 view_data( storage );
 add_data( storage, 4 );
 view_data( storage );
 add_data( storage, 8 );
 view_data( storage );
 add_data( storage, 2 );
 view_data( storage );

int i;
i = search_data( storage, 8 );
cout<<i<<endl;

i = search_data( storage, 5 );
cout<<i<<endl;
    return 0;
}
