/*Write a program containing functions
 which counts the number of positive integers 
 in an array.*/
 #include <iostream>
using namespace std;
int checkarray(int m[],int n){
    int u=0;
for(int i=0;i<n;i++){
    if(m[i]>0){
        u=u+1;
    }
}
cout<<u;
}
int main(){
    int arr[4]={1,2,3,-6};
    checkarray(arr,4);
}