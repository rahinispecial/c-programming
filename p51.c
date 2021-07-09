/*Pg no 51
Aim : to find a given character is an arithmatic operator or not*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            printf("%c is an arithmatic operator",ch);
            break;
        default:
            printf("%c is not an arithmatic operator",ch);
            break;
        }
    }