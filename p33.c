/* pg no 33
Aim to find the biggest of two numbers using ternary operator*/
#include <stdio.h>
int main(){
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=a>b?a:b;
    printf("biggest number is %d",x);
}