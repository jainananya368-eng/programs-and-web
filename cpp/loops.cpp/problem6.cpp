//Write a program to calculate the factorial of a given number
#include <iostream>
using namespace std;
int factorial(int m){
    int fact;
    if (m==1){
        return 1;
    }
    return (m*(factorial (m-1)));
}
int main(){
    int n,f;
    cout<<"ENTER A NUMBER";
    cin>>n;
    f=factorial(n);
    cout<<f;
}