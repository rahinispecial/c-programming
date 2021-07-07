/* pg no 41
Aim To find the given character is lower case or not*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=97&&ch<=122){
        printf("%c is a lower case",ch);
    }
    else{
        printf("%c is not a lower case",ch);
    }
}