/*Pg no 65
Aim : to read and display 10 numbers using array*/
#include <stdio.h>
int main(){
    int a[10],i;
    i=0;
    while(i<10){
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    while(i<10){
        printf("%d",a[i]);
        i++;
    }
}