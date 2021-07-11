/* pg no 61
Aim : to read numbers and find the sum of positiv and negative numbers*/
#include <stdio.h>
int main(){
    int n,sp,sn;
    scanf("%d",&n);
    sp=0;
    sn=0;
    while(n!=-1000){
        if(n>0){
        sp=sp+n;
        }
        else if(n<0){
        sn=sn+n;
        }
        scanf("%d",&n);
    }
    printf("sum of positive number is %d",sp);
    printf("sum of negative number is %d",sn);
}