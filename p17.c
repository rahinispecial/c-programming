/*pg no 17
aim : to find a given number is zero or not*/
#include <stdio.h>
int main(){
    float n;
    scanf("%f",&n);
    
    if(n==0){
        printf("%f is a zero",n);
    }
    else{
        printf("%f is not a zero",n);
    }
}