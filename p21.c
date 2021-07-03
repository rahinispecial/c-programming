/*Pg no.21
Aim : to find the smallest number among three numbers*/
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if(c<a){
            printf("smallest number is %d",c);
        }
        else{
            printf("smallest number is %d",a);
        }
    }
    else if(b<c){
        printf("smallest number is %d",b);
    }
    else{
        printf("smallest number is %d",c);
    }
}