/*pg no 66
Aim : to find the sum of ten numbers in array*/
#include <stdio.h>
int main(){
    int a[10],i,sa;
    i=0;
    while(i<10){
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    sa=0;
    while(i<10){
        sa=a[i]+sa;
        i++;
    }
    printf("%d",sa);
}