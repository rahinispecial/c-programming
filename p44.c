/* pg no 44
Aim :To convert upper case into lower case*/
#include <stdio.h>
int main(){
    char ch,c;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90){
    c=ch+32;
        printf("converted value is %c",c);
    }
    else{
        printf("%c is not an upper case",ch);
    }
}