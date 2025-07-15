#include<bits/stdc++.h>
using namespace std;
double lagrange(double x,double x0,double x1,double x2,double fx0,double fx1,double fx2)
{
    double term1 = ((x-x1)/(x0-x1))*fx0;
    double term2= (((x-x0)*(x-x2))/((x1-x0)*(x1-x2)))*fx1;
    double term3 = (((x-x1)*(x-x0))/((x2-x1)*(x2-x0)))*fx2;
    return term1+term2+term3;
}
int main()
{
    double x,x0,x1,x2,fx0,fx1,fx2;
    x=2;
    x0=1;
    x1=4;
    x2=6;
    fx0=0;
    fx1=1.386294;
    fx2=1.791760;
    double Lagrange=lagrange(x,x0,x1,x2,fx0,fx1,fx2);
    cout<<"Lagrange second divition is :"<<Lagrange;
}
