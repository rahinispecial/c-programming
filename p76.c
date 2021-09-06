/*Pg no 76
Aim : to read and print 3*3 matrix*/
#include <stdio.h>
int main(){
    int a[3][3],i,j;
    i=0;
    while (i<3){
        j=0;
        while(j<3){
            scanf("%d",&a[i][j]);
            j++;
        }
        i++;
    }
    i=0;
    while(i<3){
        j=0;
        while(j<3){
            printf("%d",a[i][j]);
            j++;
        }
        i++;
    }
}