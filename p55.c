/* pg no 55
Aim : to find a year leap year or not from 1000 to 2000*/
#include <stdio.h>
int main(){
    int n;
    n=1000;
    while(n<=2000){
        if(n%4==0){
            printf("%d is leap year\n",n);
        }
        else{
            printf("%d is not a leap year\n",n);
        }
        n++;
    }
}