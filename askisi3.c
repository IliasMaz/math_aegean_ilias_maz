#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LEASTMASK 0X01
#define MASK8 0XFF



int main()
{
 int i;
 unsigned char x, y, temp1, temp2;
 for(x=1; x<=127; x++)
 {
     i=1;
     temp1=x;
     while((temp1&LEASTMASK)==0){
        i++;
        temp1=temp1>>1;
     }
     temp2+MASK8<<i;
     y=x^temp2;
     printf("\n %d %x %d %x", x, x, -x, y);

     return 0;
 }



















}
