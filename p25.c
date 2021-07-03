/* pg no 25
Aim : to find a given number is odd or even*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is an even number",n);
    }
    else{
        printf("%d is an odd number",n);
    }
}