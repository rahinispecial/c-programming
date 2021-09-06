/*Pg no 77
Aim : to find the sum of two matrices*/
#include <stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j;
    i=0;
    while(i<3){
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
            scanf("%d",&b[i][j]);
            j++;
        }
        i++;
    }
    i=0;
    while(i<3){
        j=0;
        while(j<3){
            c[i][j]=a[i][j]+b[i][j];
            j++;
        }
        i++;
    }
    i=0;
    while(i<3){
        j=0;
        while(j<3){
            printf("%d",c[i][j]);
            j++;
        }
        i++;
    }
}