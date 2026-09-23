//3. A do while loop
#include <iostream>
using namespace std;
int main (){
    int i=1;
    do{
        cout<<"NUMBER IS EVEN"<<"\n"<<i;
        i++;
    } while(i%2==0 && i<=10);
    return 0;
}
//prints only 1 and 2 and stops at 3 