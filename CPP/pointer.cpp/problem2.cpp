/*2. Write a program having a variable i . print the address of i
pass this variable to a function and print its addresss . are these
addresses same?why */
#include <iostream>
using namespace std;
int change(int m){
    return;
}
int main(){
    int i=11;
    cout<<&i;
    int l=change(i);
    cout<<l;
}
