#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double maclaurin(double x, int N);

int main()
{
  double x ,z;
  int N;

  printf("dwse pragmatiko arithmo\n ");
  scanf("%lf",&x);

  printf("dwse plithos N\n ");
  scanf("%d",&N);

  z=maclaurin(x ,N);

  printf("%lf%lf%lf",x,z,pow(cos(x),2));

  return 0;

}

double maclaurin(double x, int N){

double sum ,i ,term ,y;

sum=0;
term=1;
y=4*pow(x,2);

for(i=1;i<=N; i++){

    term=term*(-(y/2*i*(2*i-1)));
    sum+=term;

}

sum=1+sum/2;


return sum;
}
