/* pg no 47
Aim : to Read a vowel and print in word*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'){
        printf("%c for Apple",ch);
    
    }
    else if(ch=='e'){
        printf("%c for Elephant",ch);
    }
    else if(ch=='i'){
        printf("%c for Ice Cream",ch);
    }
    else if(ch=='o'){
        printf("%c for Owl",ch);
    }
    else if(ch=='u'){
        printf("%c for Umbrella",ch);
    }
    else{
        printf("%c is not a vowel",ch);
    }
}