#include <iostream>
using namespace std;
int main() {
    int days,months,remainingdays;
	cout<<"ENTER NO OF DAYS";
	cin>>days;
	months=(days)/30;
	remainingdays=days%30;
	cout<<"NO OF MONTHS ARE:"<<months<<"\n";
	cout<<"NO OF DAYS ARE:"<<remainingdays;
	return 0;
}