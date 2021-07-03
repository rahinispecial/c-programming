/* pg no 30
Aim : to find a given year is leap year or not using negation*/
#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    x=n%4;
    if(!x){
        printf("%d is a leap year",n);
    }
    else{
        printf("%d is not a leap year",n);
    }
}