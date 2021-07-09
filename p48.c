/* pg no 48
Aim :to read a single digit and print it in word*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 0:
            printf("%d is Zero",n);
            break;
        case 1:
            printf("%d is One",n);
            break;
        case 2:
            printf("%d is Two",n);
            break;
        case 3:
            printf("%d is Three",n);
            break;
        case 4:
            printf("%d is Four",n);
            break;
        case 5:
            printf("%d is Five",n);
            break;
        case 6:
            printf("%d is Six",n);
            break;
        case 7:
            printf("%d is Seven",n);
            break;
        case 8:
            printf("%d is Eight",n);
            break;
        case 9:
            printf("%d is Nine",n);
            break;
        default:
            printf("%d is not a single digit",n);
            break;
        }
    } 