/*Create an array of size 3 × 10
 containing multiplication tables of 
 the numbers 2, 7 and 9 respectively.*/
 #include <iostream>
using namespace std;
int printarray(int m[],int n){
for(int i=0;i<n;i++){
    cout<<m[i]<<"\n";
}
}
int main(){
    int arr[3][10];
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            if(i==0){
                arr[0][j]=(2*(j+1));
            }
            if(i==1){
                arr[1][j]=(7*(j+1));
            }
            if(i==2){
                arr[2][j]=(9*(j+1));
            }

        }
    }
    printarray(arr[3],3);
}