/* pg no 27
Aim : to find a given number is double digit or not*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=10&&n<=99||n<=-10&&n>=-99){
        printf("%d is double digit number",n);
    }
    else{
        printf("%d is not a double digit number",n);
    }
}