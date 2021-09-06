/*pg no 75
Aim : to find how many number of times the given number exist in a ten number array*/
# include <stdio.h>
int main(){
    int a[10],i,n,cn;
    i=0;
    while(i<10){
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    cn=0;
    scanf("%d",&n);
    while (i<10){
        if(a[i]==n){
            cn++;
        }
        i++;
    }
    printf("count is %d",cn);
}