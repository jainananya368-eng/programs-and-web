//DISPLAY THE REVERSE NUMBER OF A 4 DIGIT USER INPUT NUMBER
#include <iostream>
using namespace std;
int main(){
    int num,reverse;
    cout<<"ENTER A FOUR DIGIT NUMBER";
    cin>>num;
    cout<<num;
    int a,b,c,d;
	a=num%10;
	cout<<a;
	num=num/10;
	b=num%10;
	cout<<b;
	num=num/10;
	c=num%10;
	num=num/10;
	cout<<c;
	d=num%10;
	num=num/10;
	cout<<d;
    reverse=(1000*a)+(100*b)+(10*c)+d;
    cout<<"\n"<<reverse;
}