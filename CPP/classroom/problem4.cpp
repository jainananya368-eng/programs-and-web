
#include  <iostream>
#include <cmath>
using namespace std;
int main() {
	int num,pos;
	cout<<"ENTER A FIVE DIGIT NUMBER"<<"\n";
	cin>>num;
	cout<<"ENTER THE DIGIT POSITION"<<"\n";
	cin>>pos;
	int g=int(pow(10,pos-1));
	int digit=(num/g)%10;
	cout<<"\n"<<digit;
}
