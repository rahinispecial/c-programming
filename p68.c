/*pg no 68
Aim : to find the biggest of ten numbers in array*/
#include <stdio.h>
int main(){
    int a[10],i,big;
    i=0;
    while(i<10){
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    big=a[0];
    while(i<10){
        if(a[i]>big){
        big=a[i];
        }
    i++;
    }
    printf("biggest of ten numbers is %d",big);
}    