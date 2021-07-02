/* ph no 13
Aim : to read r and h and find the volume of cylinder*/
#include <stdio.h>
int main(){
  float pi,r,h,volume;
  scanf("%f %f",&r,&h);
  pi=3.14;
  volume=pi*r*r*h;
  printf("volume of cylinder is %f",volume);
}