#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 2.718
#define k 0.000001
int main()
{

    int n;
    float x, s, term;

    printf("\ndwse timh sthn metablhth x:");
    scanf("%f", &x);


    if ((x>0)&&(x<=2)){
       while(term>k);
        s=0;
        term=1;
        n=0;
        s=s+term;
        n=n+1;
        term=pow(x,n)*pow(e,-n*sin(x));
        printf("\nTo apotelesma einai: %f", term);

    }
     else {
        printf("\nlathos dedomena");



     }


    return 0;
}
