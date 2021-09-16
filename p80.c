/* pg no.80
Aim : to find the sum of row values in 3*3 matrix*/
#include <stdio.h>
int main(){
    int a[3][3],i,j,row,sr;
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
                printf("%d",a[i][j]);
                j++;
            }
            i++;
        }
    sr=0;
    printf("Enter row");
    scanf("%d",&row);
    if(row<=3){
        j=0;
        while(j<3){
            sr=sr+a[row-1][j];
            j++;
        }
    }
        printf("%d",sr);
}