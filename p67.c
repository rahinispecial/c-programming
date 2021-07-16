/*pg no 67
Aim :to find mean of ten numbers in array*/
#include <stdio.h>
int main(){
    int a[10],i;
    float sa,ma;
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
    ma=sa/i;
    printf("mean of ten numbers %f",ma);
}