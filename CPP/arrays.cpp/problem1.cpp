/*1. Create an array of 10 numbers. Verify using pointer arithmetic that 
(ptr+2)
 points to
the third element where 
ptr
 is a pointer pointing to the first element of the array*/
#include <iostream>
using namespace std;
int main(){
    int i=0;
    int arr[10];
    while(i<10){
        int p;
        cout<<"ENTER A NUMBER";
        cin>>p;
        arr[i]=p;
        i++;
    }
    int j=0;
    while(j<10){
        cout<<arr[j]<<"\n";
        j++;
    }
    int* p=arr;
    cout<<*p;
    cout<<*(p+2);
}