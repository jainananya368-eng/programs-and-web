
/*
Write a program with a
 structure representing a complex number.*/
#include <stdio.h>
typedef struct cn{
    int a;
    int b;
}complexnum;
int main(){
    complexnum n1;
    n1={1,2};
    complexnum n2;
    n2.a=3;
    n2.b=3;
    printf("THE COMPLEX NUMBERS STORED ARE %di+%d, %di+%d",n1.a,n1.b,n2.a,n2.b);

}