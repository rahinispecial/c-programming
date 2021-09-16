/* pg no 81
Aim: to find the sum of column values in 3*3 matrix*/
#include <stdio.h>
int main(){
    int a[3][3],b[3][3],i,j,colum,sc;
    i=0;
    while(i<3){
        j=0;
        while(j<3){
            scanf("%d",&a[i][j]);
            j++;
        }
        i++;
    }
    sc=0;
    printf("Enter colum");
    scanf("%d",&colum);
    i=0;
    while(i<3){
        sc=sc+a[i][colum-1];
        i++;
    }
    printf("%d",sc);
}