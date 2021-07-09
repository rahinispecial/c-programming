/* pg no 50
Aim : to read a vowel and print it in word for both upper and lower case*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'A':
            printf("%c for Apple",ch);
            break;
        case 'e':
        case 'E':
            printf("%c for Elephant",ch);
            break;
        case 'i':
        case 'I':
            printf("%c for Ice cream",ch);
            break;
        case 'o':
        case 'O':
            printf("%c for Owl",ch);
            break;
        case 'u':
        case 'U':
            printf("%c for Umbrella",ch);
            break;
        default:
            printf("%c is not a vowel",ch);
            break;
        }
    }