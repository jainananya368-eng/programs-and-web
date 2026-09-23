#include <iostream>
using namespace std;
int main(){
	int num,pos;
	cout<<"ENTER A FIVE DIGIT NUMBER";
	cin>>num;
	cout<<"ENTER THE DIGIT TO FIND POSITION";
	cin>>pos;
	int a,b,c,d;
	a=num%10;
	if (pos==a){
	cout<<5;}
	num=num/10;
	b=num%10;
	if (pos==b){
	    cout<<4;
    }
	num=num/10;
	c=num%10;
	if (pos==c){
	    cout<<3;
	}
	num=num/10;
	d=num%10;
	num=num/10;
	if (pos==d){
	cout<<2;}
	if (pos==num){
	    cout<<1;
	}
}