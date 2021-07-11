/*pg no 58
Aim : to print numbers until -1000 given*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n!=-1000){
        printf("%d\n",n);
        scanf("%d",&n);
    }
}