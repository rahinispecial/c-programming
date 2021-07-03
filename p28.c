/*pg no 28
Aim : to classify a given number is single, double, triple of four digit*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=0&&n<=9||n<=0&&n>=-9){
        printf("%d is a single digit number",n);
    }
    else if(n>=10&&n<=99||n<=-10&&n>=-99){
        printf("%d is a double digit number",n);
    }
    else if(n>=100&&n<=999||n<=-100&&n>=-999){
        printf("%d is a triple digit number",n);
    }
    else if(n>=1000&&n<=9999||n<=-1000&&n>=-9999){
        printf("%d is a four digit number",n);
    }
    else{
        printf("%d is greater than four digit",n);
    }
}