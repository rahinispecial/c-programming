/* pg no 71
Aim : to swap the biggest and smallest of ten numbers in array*/
#include <stdio.h>
int main(){
    int a[10],i,big,small,bp,sp,x;
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
    i=0;
    small=a[0];
    while(i<10){
        if(a[i]<small){
            small=a[i];
            sp=i;
        }
        i++;
    }
    x=a[bp];
    a[bp]=a[sp];
    a[sp]=x;
    printf("%d, %d, ",bp,sp);
    i=0;
    while(i<10){
        printf("%d, ",a[i]);
        i++;
    }
}