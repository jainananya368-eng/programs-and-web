/*1. Write a program to print the address of a variable. Use this address to get the value of
the variable */
#include <iostream>
using namespace std;
int main(){
    int i=99;
    int *p=&i;
    cout<<p<<"\n";
    cout<<*p;
}