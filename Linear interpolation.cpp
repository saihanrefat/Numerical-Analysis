#include<bits/stdc++.h>
using namespace std;
double Linear(double x,double x0,double x1,double fx0,double fx1)
{
    double term1 =fx0;
    double term2= ((fx1-fx0)/(x1-x0))*(x-x0);
    return term1+term2;
}
int main()
{
    double x,x0,x1,fx0,fx1;
    x=2;
    x0=1;
    x1=6;
    fx0=0;
    fx1=1.791759;
    double linear=Linear(x,x0,x1,fx0,fx1);
    cout<<"Linear interpolation is :"<<linear<<endl;
    cout<<"Erroe is:"<<((0.6931-linear)/0.6931)*100;
}
