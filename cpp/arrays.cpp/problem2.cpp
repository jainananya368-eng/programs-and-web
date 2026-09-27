/*Write a program to create an array of 10 integers and store multiplication table of 5 in
it*/
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
         arr[i]=(5*(i+1));
    }
     for(int p=0;p<10;p++){
        cout<<arr[p]<<"\n";
     }
}