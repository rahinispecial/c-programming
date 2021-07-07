/* pg no 45
Aim :To convert upper case into lower case*/
#include <stdio.h>
int main(){
    char ch,c;
    scanf("%c",&ch);
    if(ch>=97&&ch<=122){
    c=ch-32;
        printf("converted value is %c",c);
    }
    else{
        printf("%c is not a lower case",ch);
    }
}