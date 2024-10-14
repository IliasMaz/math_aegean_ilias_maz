#include <iostream>
#include <cmath>
#define DEFAULT_DIM 3

using namespace std;

class MyMatrix {

private:
    int n;
    float**a;

public:
    MyMatrix() {

    int i,j;
n=DEFAULT_DIM;
a=new float*[n];
for (i=0;i<n;i++)
        a[i]=new float[n];
for (i=0;i<n;i++)
    for (j=0;j<n;j++)
    a[i][j]=0;
    }

    MyMatrix(int n){
    int i,j;

    this->n=n;

    a=new float*[n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        a[i][j]=0;
    }

    void printMatrix(){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        cout <<a[i][j]<<' ';
    cout<<endl;
    }

    }

    void set_value(int i,int j,float x){
    a[i][j]=x;
    }

    float norm(){
    int i,j;
    float s;
    float max=-1;
    for(j=0;j<n-1;j++){
        s=0;
    for (i=0;i<n-1;i++)
        s=s+abs(a[i][j]);
    if(max<s)
        max=s;

    }

    return max;

    }


    MyMatrix operator+(MyMatrix x){
    int i,j;
    float temp;

    MyMatrix temp(x.n)
    for(i=0;i<n<i++)
        for(j=0;j<n<j++)
        temp.a[i][j]=this->a[i][j]+x.a[i][j];

    return temp;

    }

    int main(){

    int i,j,n;

    cout<<"dwse thn diastash">>

    c/n>>n;

    a=MyMatrix(n);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){

        cin<<x;
        a.set_value(i,j,x);
                     }

                     b=MyMatrix(n);
                     for(i=0;i<n;i++)
                     for(j=0;j<n;j++){

                        cin<<x;
                        b.set_value(i,j,x);
                     }
    cout<<"h norma tou a einai"<<a.norm()<<endl;
    cout<<"h norma tou b einai"<<b.norm()<<endl;

    c=a+b;
    c.printMatrix();

    }

};
