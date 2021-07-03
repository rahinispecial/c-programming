/*pg no 29
/* aim : to find a given integer is even or not using implicit*/
#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    x=n%2;
    if(x){
        printf("%d is not an even number",n);
    }
    else{
        printf("%d is an even number",n);
    }
}