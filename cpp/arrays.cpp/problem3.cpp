/*5. Write a program containing a function which reverses the array passed to it*/
#include <iostream>
using namespace std;
int printarray(int m[],int n){
for(int i=0;i<n;i++){
    cout<<m[i]<<"\n";
}
}
int reversearray(int k[],int l){
    int temp;
    for(int j=0;j<(l/2);j++){
        temp= k[j];
        k[j]=k[l-j-1];
        k[l-j-1]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    printarray(arr,5);
    reversearray(arr,5);
    cout<<"\t";
    printarray(arr,5);
}