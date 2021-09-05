/* pg no 73
Aim : to interchange second biggest and second smallest number of ten numbers in array*/
#include <stdio.h>
int main(){
    int a[10],i,big,small,sb,ss,x,sbp,ssp;
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
    i=0;
    small=a[0];
    while(i<10){
        if(a[i]<small){
            small=a[i];
        }
        i++;
    }
    i=0;
    sb=small;
    while(i<10){
        if(a[i]>small&&a[i]!=big){
            sb=a[i];
            sbp=i;
        }
        i++;
    }
    i=0;
    ss=big;
    while(i<10){
        if(a[i]<ss&&a[i]!=small){
            ss=a[i];
            ssp=i;
        }
        i++;
    }
    x=a[sbp];
    a[sbp]=a[ssp];
    a[ssp]=x;
    printf("Second big: %d\n Second small: %d\n",a[sbp],a[ssp]);
    i=0;
    while(i<10){
        printf("%d",a[i]);
        i++;
    }
}
    