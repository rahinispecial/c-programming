/*pg no 56
Aim : to read two limits and find it even or odd*/
#include <stdio.h>
int main(){
    int i,j;
    scanf("%d %d",&i,&j);
    while(i<=j){
        if(i%2==0){
            printf("%d is even number\n",i);
        }
        else{
            printf("%d is odd number\n",i);
        }
        i++;
    }
}