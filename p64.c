/* Pg no 64
Aim : to Classify a character into upper case,lower case,single digit
    or special character until $ is given*/
    
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    while(ch!='$'){
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
        scanf("%c",&ch);
    }
}