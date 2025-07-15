#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return 0.2+25*x-200*x*x+675*pow(x,3)-900*pow(x,4)+400*pow(x,5);
}
int main()
{
    double a=0;
    double b=0.8;
    double exact_value= 1.640533;
    double integration=(b-a)*((f(a)+f(b))/2);
    cout<<"Integration result is: "<<integration<<endl;
    cout<<"Error is:"<<exact_value-integration;
}
