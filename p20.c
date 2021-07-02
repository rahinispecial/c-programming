/* pg no 20
Aim : to read three numbers and find the biggest number*/
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if(b<c){
            printf("%d biggest number is",c);
        }
        else{
            printf("%d biggest number is",b);
        }
    }
    else if(c<a){
        printf("%d biggest number is",a);
    }
    else{
        printf("%d biggest number is",c);
    }
}