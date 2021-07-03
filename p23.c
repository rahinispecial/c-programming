/* pg no 23
Aim : to find a given number is single digit or not*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=0&&n<=9||n<=0&&n>=-9){
        printf("%d is a single digit number",n);
    }
    else{
        printf("%d is not a single digit number",n);
    }
}