//Create a two-dimensional vector using structures in C.
#include <stdio.h>
int main(){
    struct vector{ int i;int j;};
    vector v={1,2};
    printf("THE STRUCT IS %d.i,%d.j", v.i, v.j);
}