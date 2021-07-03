/*pg no 22
Aim : to find a given character is vowel or not*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("%c is a vowel",ch);
    }
    else{
        printf("%c is not a vowel",ch);
    }
}    