/*Create a three-dimensional array and print the 
addresses of its elements in increasing order.*/
#include <iostream>
using namespace std;
int main(){
    int arr[3][3][3];
    int* ptr=&arr[0][0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cout<<arr[i][j][k]<<"\n";
                cout<<ptr;
                ptr++;
            }
        }
    }
}