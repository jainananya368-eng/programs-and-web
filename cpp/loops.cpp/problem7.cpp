/*8. Write a program to calculate the factorial of a given number using a 
while loop.*/
#include <iostream>
using namespace std;
int main(){
    int fact=1;
    int n;
    cout<<"ENTER A NUMBER";
    cin>>n;
    while (n>0){
        fact=fact*n;
        n--;
    }
    cout<<fact;
}