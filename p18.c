/* pg no 18
Aim : to find a given number positive,negative or zero*/
#include <stdio.h>
int main(){
    float n;
    scanf("%f",&n);
    if(n>0){
        printf("%f is a positive number",n);
    }
    else if(n<0){
        printf("%f is a neative number",n);
    }
    else if(n==0){
        printf("%f is zero",n);
    }
}