/* pg no 62
Aim : to find the mean of positive and negative numbers until -1000 given*/
#include <stdio.h>
int main(){
    int n,sp,sn,cp,cn;
    float mp,mn;
    scanf("%d",&n);
    cp=0;
    cn=0;
    sp=0;
    sn=0;
    while(n!=-1000){
        if(n>0){
        cp++;
        sp=sp+n;;
        }
        else if(n<0){
        cn++;
        sn=sn+n;
        }
        scanf("%d",&n);
    }
    mp=sp/cp;
    mn=sn/cn;
    printf("mean of positive number is %f\n",mp);
    printf("mean of negative number is %f\n",mn);
}