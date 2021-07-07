/* pg no 35
Aim to find the biggest of three numbers using ternary oprator*/
#include <stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    x=a>b?a:b;
    x=a>c?a:c;
    printf("the biggest value is %d",x);
}