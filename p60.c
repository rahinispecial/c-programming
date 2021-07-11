/*pg no 60
Aim : to read the given numbers and count the positive negative and zero value
    until -1000 given*/
#include <stdio.h>
int main(){
    int n,cp,cn,cz;
    scanf("%d",&n);
    cp=0;
    cn=0;
    cz=0;
    while(n!=-1000){
        if(n>0){
        cp++;
        }
        else if(n<0){
        cn++;
        }
        else if(n==0){
        cz++;
        }
        scanf("%d",&n);
    }
    printf("%d,%d,%d",cp,cn,cz);
}
        