/*pg no 14
Aim : to read the value of f and convert it into centigrade*/
#include <stdio.h>
int main(){
  float f,c;
  scanf("%f",&f);
  c=(f-32)*5/9;
  printf("centigrade value is %f",c);
}