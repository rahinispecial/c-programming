/* pg no 42
Aim To find the given character is single digit or not*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=48&&ch<=57){
        printf("%c is a single digit",ch);
    }
    else{
        printf("%c is not a single digit",ch);
    }
}