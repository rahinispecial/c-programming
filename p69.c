/* pg no 69
Aim : to find the smallest of ten numbers in array*/
#include <stdio.h>
int main(){
    int a[10],i,small;
    i=0;
    while(i<10){
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    small=a[0];
    while(i<10){
        if(a[i]<small){
            small=a[i];
        }
        i++;
    }
    printf("small number is %d",small);
}