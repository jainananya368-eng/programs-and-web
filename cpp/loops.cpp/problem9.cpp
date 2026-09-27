//10. Write a program to check whether a given number is prime or not using loops
#include <iostream>
using namespace std;
int main(){
    int n;
    int i=2;
    cout<<"ENTER A NUMBER";
    cin>>n;
    if (n==1){
        cout<<"NUMBER IS NEITHER PRIME NOR NOT PRIME";
    }
    else{
        while(i<=(n/2)){
        if ((n%i)==0){
            cout<<"NUMBER IS NOT PRIME";
            return 0;
        }
        i++;
    }
    cout<<"NUMBER IS PRIME";
    return 0;
}
}

    