/* pg no 36
Aim to find the biggest of three numbers using nested ternary operator*/
#include <stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    x=(a>b)?(a>c)?a:c:(b>c)?b:c;
    printf("biggest number is %d",x);
}