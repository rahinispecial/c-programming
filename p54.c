/* pg no 54
Aim : to print numbers from 1to 1000 and find it even or odd*/
#include <stdio.h>
int main(){
    int n;
    n=1;
    while(n<=1000){
        if(n%2==0){
            printf("%d is even number\n",n);
        }
        else{
            printf("%d is odd number\n",n);
        }
        n++;
    }
}