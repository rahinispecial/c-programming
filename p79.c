/* pg no 79
Aim : to find the transposr of 3*3 matrix*/
#include <stdio.h>
int main(){
    int a[3][3],i,j,b[3][3];
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
    while (i<3){
        j=0;
        while(j<3){
            b[i][j]=a[j][i];
            j++;
        }
        i++;
    }
    i=0;
    while(i<3){
        j=0;
        while(j<3){
            printf("%d",b[i][j]);
            j++;
        }
        i++;
    }
}