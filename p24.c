/*pg no 24
Aim : to find a given character is an arithmatic operator or not*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'){
        printf("%c is an arithmatic operator",ch);
    }
    else{
        printf("%c is not an arithmatic operator",ch);
    }
}