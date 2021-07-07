/* pg no 40
Aim To find the given character is upper case or not*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90){
        printf("%c is an upper case",ch);
    }
    else{
        printf("%c is not an upper case",ch);
    }
}