/* pg no 43
Aim : to classify a given character into upper case, lower case,single digit or special character*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90){
        printf("%c is an upper case",ch);
    }
    else if(ch>=97&&ch<=122){
        printf("%c is a lower case",ch);
    }
    else if(ch>=48&&ch<=57){
        printf("%c is a single digit",ch);
    }
    else{
        printf("%c is a special character",ch);
    }
}