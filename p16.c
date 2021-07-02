/*pg no 16
Aim : to find the given number negative or not*/
#include <stdio.h>
int main(){
    float n;
    scanf("%f",&n);
    
    if(n<0){
    printf("%f is a negative number",n);
    }
    else{
    printf("%f is not a negative number",n);
    }
}