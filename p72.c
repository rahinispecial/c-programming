/* pg no 72
Aim : to find the second biggest number of ten numbers in array*/
#include <stdio.h>
int main(){
    int a[10],i,big,small,sb;
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
    printf("biggest number is %d",big);
    i=0;
    small=a[0];
    while(i<10){
        if(a[i]<small){
            small=a[i];
        }
        i++;
    }
    printf("smallest number is %d",small);
    i=0;
    sb=small;
    while(i<10){
        if(a[i]>sb&&a[i]!=big){
        sb=a[i];
        }
        i++;
    }
    printf("second biggest number is %d",sb);
}