/* pg no 59
Aim : to classify a number into positive negative or zero until -1000 given*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n!=-1000){
        if(n>0){
            printf("%d is positive number\n",n);
        }
        else if(n<0){
            printf("%d is negative number\n",n);
        }
        else if(n==0){
            printf("%d is zero\n",n);
        }
        scanf("%d",&n);
    }
}