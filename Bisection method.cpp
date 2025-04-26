#include<iostream>
#include<cmath>
using namespace std;
///Declare a function
double f(double x)
{
    return -0.4*x*x+2.2*x+4.7;
}
void bisection(double a,double b)
{
    if(f(a)*f(b)>=0)
    {
        cout<<"Numbers are incorrect"<<endl;
        return;
    }
    double new_c;
    double old_c=a;
    double epsilon= 1e-6;
    while(1)
    {
         new_c=(a+b)/2;
         cout<<a<<" "<<b<<" "<<f(a)<<" "<<f(b)<<" "<<new_c<<" "<<f(new_c)<<endl;
         if(fabs(new_c-old_c)<epsilon)
         {
             break;
         }
         else if(f(a)*f(new_c)<=0)
         {
             b=new_c;
         }
         else
         {
           a=new_c;
         }
         old_c=new_c;
    }
    cout<<endl;
    cout<<"Root is:"<<new_c;
}
int main()
{
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    bisection(a,b);
    return 0;
}
