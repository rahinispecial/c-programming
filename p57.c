/* pg no : 57
Aim : to read two limits and find it leap year or not*/
#include <stdio.h>
int main(){
    int i,j;
    scanf("%d %d",&i,&j);
    while(i<=j){
        if(i%4==0){
            printf("%d is a leap year\n",i);
        }
        else{
            printf("%d is not a leap year\n",i);
        }
        i++;
    }
}