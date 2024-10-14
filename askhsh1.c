#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double **calcmatrix(double f(double),double *p,int n);
void printmatrix (double **A,int n);


int main(int argc,char **argv){

    int n,i;
    double *p;
    double **A;
    n=atoi (argv[1]);
    p=(double*)malloc(n*sizeof(double));
    for(i=0;1<n;i++)
        scanf("%lf",&p[i]);
    A=calcmatrix(cos,p,n);
    printf("pinakas me cos\n");
    printmatrix(A,n);
    A=calcmatrix(sin,p,n);
    printf("o pinakas me sin\n");
    printmatrix(A,n);
    free(p);
    for(i=0;i<n;i++)
        free(A[i]);
    free(A);
    return 0;
}

double **calcmatrix(double f(double),double *p,int n){
  int i,j;
  double **A;
  A=(double**)malloc(n*sizeof(double*));
  for(i=0;i<n;i++)
    A[i]=(double *)malloc(n*sizeof(double));
  for(j=0;j<n;j++)
    A[i][j]=pow(f(p[i]*p[j]),(double)2);
  return A;
}

void printmatrix(double *A[],int n){
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    printf("%lf",A[i][j]);
printf("\n");
}
}
