//1. Write a program using recursion to calculate nth element of Fibonacci series.
#include <iostream>
using namespace std;
int fibo(int n){
    if (n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int m,p;
    cout<<"ENTER THE TERM";
    cin>>m;
    p=fibo(m);
    cout<<p;
    return 0;
}