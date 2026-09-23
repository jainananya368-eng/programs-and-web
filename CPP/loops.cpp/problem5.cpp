//CACULATE SUM OF NUMBERS APPEARING IN THE TABLE OF 8
#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1;i<=10;i++){
        cout<<(8*i)<<"\n";
        sum=sum+(8*i);
    }
    cout<<sum;
    return 0;
}