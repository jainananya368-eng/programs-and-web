/*4. Write a function and pass the value by reference.*/
#include <iostream>
using namespace std;
int doubleing(int &m){
    m=m*2;
    return m;
}
int main(){
    int i=10;
    cout<<i;
    int k=doubleing(i);
    cout<<i;
}