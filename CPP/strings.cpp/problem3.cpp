/*Write a function slice() to slice a string
 It should change the original string such that it is
 now the sliced string. 
Take m and n as the start and ending position for slice.*/
#include <iostream>
using namespace std;
void slice(char str[],int m,int n){
     int  i=0;
      while(m<=n){
         str[i]=str[m];
         i++;
         m++;
      }
    str[i]='\0';
    cout<<str;
    }
int main(){
    char hirl[]="cats";
    slice(hirl,1,3);
}