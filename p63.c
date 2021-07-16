/* pg no 63
Aim : to read and print character until $ is given*/
#include <stdio.h>
int main(){	
    char ch;
    scanf("%c",&ch);
    while(ch!='$'){
        printf("%c",ch);
        scanf("%c",&ch);
    }
}