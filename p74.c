/* pg no:74
Aim: to find the given number exist or not in a ten number array*/
#include <stdio.h>
int main(){
    int i,n,flag,a[10];
    i=0;
    while(i<10){
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    scanf("%d",&n);
    flag=0;
    while(i<10){
        if(a[i]==n){
            flag=1;
        }
        i++;
    }
    if(flag==1){
        printf("%d is exist",n);
    }
    else{
        printf("%d is not exist",n);
    }
}
        