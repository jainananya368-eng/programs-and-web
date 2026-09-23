#include <iostream>
using namespace std;
int main(){
    int num;
	cout<<"ENTER A FIVE DIGIT NUMBER";
	cin>>num;
	int a,b,c,d;
	int sum=0;
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
	cout<<num<<"\n";
	cout<<"THE SUM OF NUMBERS IS:"<<"\n"<<(a+b+c+d+num);
}