/* Write a program to calculate the factorial of a given number using a 
for loop.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"ENTER A NUMBER";
    cin>>n;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    cout<<fact;
}
