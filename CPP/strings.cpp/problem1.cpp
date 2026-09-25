//Write a program to take string as an input from the
// user using %c and %s
// and confirm that the strings are equal.
#include <stdio.h>
int main(){
    char a;
    printf("ENTER A STRING");
    scanf("%c",&a);
    printf("%c",a);
    char b[10] ;
    printf("ENTER A STRING");
    scanf ("%s",&b);
    printf("%s",&b);
    return 0;
    
}