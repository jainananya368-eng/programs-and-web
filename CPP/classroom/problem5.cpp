#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num,pos,g1,g2,p1,p2,h1,h2;
	int sum=0;
	cout<<"ENTER A FIVE DIGIT NUMBER"<<"\n";
	cin>>num;
	cout<<"ENTER THE DIGIT POSITION"<<"\n";
	cin>>p1;
	g1=int(pow(10,p1-1));
	h1=(num/g1)%10;
	cout<<"ENTER THE DIGIT POSITION"<<"\n";
	cin>>p2;
	g2=int(pow(10,p2-1));
	h2=(num/g2)%10;
	sum=h1+h2;
	cout<<"\n"<<sum;
}
