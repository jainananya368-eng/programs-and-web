//3. Write a program to change the value of a variable to ten times its current value
#include <iostream>
using namespace std;
int main(){
    int i=10;
    cout<<i<<"\n";
    int *p=&i;
    * p=*p*10;
    cout<<i;
}