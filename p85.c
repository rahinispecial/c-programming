/* pg no 85
Aim : to find the sumber of times the given value exist in a 3*3 matrix*/
#include <stdio.h>
int main(){
    int a[3][3],i,j,n,cn;
    i=0;
    while(i<3){
        j=0;
        while(j<3){
            scanf("%d",&a[i][j]);
            j++;
        }
        i++;
    }
    cn=0;
    i=0;
    printf("Enter n");
    scanf("%d",&n);
    while(i<3){
        j=0;
        while(j<3){
            if(a[i][j]==n){
                cn++;
            }
            j++;
        }
        i++;
    }
    printf("%d",cn);
}
    