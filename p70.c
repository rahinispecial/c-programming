/*pg no 70
Aim : to find the position of the biggest number*/
#include <stdio.h>
int main(){
    int a[10],i,big,bp;
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
            bp=i;
        }
        i++;
    }
    printf("position of biggest number is %d",bp);
}