/* Pg no 49
Aim : to read a vowel and print it in word*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'a':
            printf("%c for Apple",ch);
            break;
        case 'e':
            printf("%c for Elephant",ch);
            break;
        case 'i':
            printf("%c for Ice cream",ch);
            break;
        case 'o':
            printf("%c for Owl",ch);
            break;
        case 'u':
            printf("%c for Umbrella",ch);
            break;
        default:
            printf("%c is not a vowel",ch);
            break;
        }
    }