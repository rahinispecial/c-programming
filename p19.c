/* pg no 19
Aim : to read two numbers and find the biggest number*/
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d biggest number is",a);
    }
    else{
        printf("%d biggest number is",b);
    }
}