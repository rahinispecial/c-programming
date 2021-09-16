/*pg no : 84
Aim : to find given value exist or not in a 3*3 matrix*/
#include <stdio.h>
int main(){	
    int a[3][3],i,j,n,flag;
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
    flag=0;
    printf("Enter n");
    scanf("%d",&n);
    while(i<3){
    	j=0;
    	while(j<3){
    	    if(a[i][j]==n){
    	    flag=1;
    	    }
    	    j++;
        }
        i++;
    }
    if(flag=1){
        printf("%d is exist",n);
    }
    else{
        printf("%d does not exist",n);
    }
}