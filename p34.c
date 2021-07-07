/* pg no 34
Aim to find the smallest of two numbers using ternary operator*/
#include <stdio.h>
int main(){
    int a,b,x;
    scanf("%d %d",&a,&b);
    x=a<b?a:b;
    printf("smallest number is %d",x);
}