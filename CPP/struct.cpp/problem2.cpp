/*Write a function sumVector which returns the sum 
of two vectors passed to it. 
The vectors must be two-dimensional.*/
#include <stdio.h>
struct vector{int i;
    int j;};
struct vector sum( struct vector v1, struct vector v2){
    struct vector v3={(v1.i+v2.i),(v1.j+v2.j)};
    return v3;
}

int main(){
    struct vector v1={4,5};
    struct vector v2={9,80};
    struct vector v3=sum(v1, v2);
    printf("THE SUM OF THE VECTORS IS %d.i+%d.j",v3.i,v3.j);
}