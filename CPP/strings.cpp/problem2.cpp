//Write your own version of strlen
 //function from <string.h>.
 #include <stdio.h>
 #include <string.h>
 int strlen(char str[]){
    int c=0;
    int count=0;
    char store;
    store=str[c];
    printf("%s", str);
    while (store!='\0'){
        store=str[c];
        c++;
    }
    count=c-1;
    printf("length of string is %d",count);
 }
 int main(){
    char cat[]="CUTE";
    strlen(cat);
 }
