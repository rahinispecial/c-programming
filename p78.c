/*Pg no 78
Aim : to find the product  of two 3*3 matrices*/
#include <stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j,k;
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
            k=0;
            while (k<3){
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                k++;
            }
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