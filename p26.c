/*pg no 26
Aim : to find a given year is leap year or not*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%4==0){
        printf("%d is a leap year",n);
    }
    else{
        printf("%d is not a leap year",n);
    }
}