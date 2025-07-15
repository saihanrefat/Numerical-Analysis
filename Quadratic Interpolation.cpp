#include<bits/stdc++.h>
using namespace std;
double Quadratic(double x,double x0,double x1,double x2,double fx0,double fx1,double fx2)
{
    double term1=fx0;
    double term2=((fx1-fx0)/(x1-x0))*(x-x0);
    double term3=(((fx2-fx1)/(x2-x1)-(fx1-fx0)/(x1-x0))/(x2-x0))*(x-x0)*(x-x1);
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
    fx2=1.791759;
    double quadratic;
     quadratic = Quadratic(x, x0, x1,x2,fx0,fx1,fx2);
    cout<<"Quadratic value is:"<<quadratic<<endl;
    cout<<"Actual Quadratic value is 0.691471806:"<<endl;
    cout<<"Error is:"<<((0.691471806-quadratic)/0.691471806)*100;

}
