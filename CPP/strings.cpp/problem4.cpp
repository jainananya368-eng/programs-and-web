/*
Write your own version 
of strcpy function from <string.h>.*/
/*#include <stdio.h>
int strlen(char str[]){
    int c=0;
    int count=0;
    char store;
    store=str[c];
    while (store!='\0'){
        store=str[c];
        c++;
    }
    count=c-1;
    return count;
 }
 void mycpy(char s[],char t[],int c){
    for (int i=0;i<=c;i++){
         t[i]= s[i];
    }
}
int main(){
    char str[]="ANANYA JAIN HELLO";
    int p=strlen(str);
    char d[p+1];
    mycpy(str,d,p);
    printf("%s", d);
    return 0;
    

}*/