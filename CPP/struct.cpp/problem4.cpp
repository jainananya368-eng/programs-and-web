/*
Create an array of 5 complex numbers created 
in Problem 5 and display them with the help of a display
 function. The values must be taken as an input from the user.
Write problem 5's structure using typedef keywords.*/
#include <stdio.h>
typedef struct comp{
    int real;
    int imaginary;
}COMPLEX;
void display(COMPLEX c){
    printf("%d+%di\n",c.real,c.imaginary);
}
int main(){
    COMPLEX arr[5];
    for(int i=0;i<5;i++){
        printf("ENTER REAL PART");
        scanf("%d",&arr[i].real);
        printf("ENTER IMAGINARY PART");
        scanf("%d",&arr[i].imaginary);
        display(arr[i]);
    }
}