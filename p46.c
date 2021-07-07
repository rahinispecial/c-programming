/* pg no 46
Aim : to read a single digit and print it in a word*/
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch==48){
        printf("%c is Zero",ch);
    }
    else if(ch==49){
        printf("%c is One",ch);
    }
    else if(ch==50){
        printf("%c is Two",ch);
    }
    else if(ch==51){
        printf("%c is Three",ch);
    }
    else if(ch==52){
        printf("%c is Four",ch);
    }
    else if(ch==53){
        printf("%c is Five",ch);
    }
    else if(ch==54){
        printf("%c is Six",ch);
    }
    else if(ch==55){
        printf("%c is Seven",ch);
    }
    else if(ch==56){
        printf("%c is Eight",ch);
    }
    else if(ch==57){
        printf("%c is Nine",ch);
    }
    else{
        printf("%c is not a single digit",ch);
    }
}