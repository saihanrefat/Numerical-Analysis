#include<iostream>
#include<math.h>
using namespace std;
double f(double x)
{
    return -26+82.3*x-88*pow(x,2)+45.4*pow(x,3)-9*pow(x,4)+0.65*pow(x,5);
}
void bisection(double a,double b)
{
    double x_new;
    double x_old;
    int iter=0;
    double Es=10.0;
    double Ea=100.0;
    while(1)
    {
       x_old=x_new;
       x_new=(a+b)/2;
       if(iter>0)
       {
           Ea=fabs((x_new-x_old)/x_new)*100;
       }
       cout<<a<<" "<<b<<" "<<x_new<<" ";
        if(iter>0)
        {
            cout<<Ea<<endl;
        }
        else
            cout<<endl;
        if(Ea<=Es)
        {
            break;
        }
       else if(f(a)*f(x_new)<0)
        {
            b=x_new;
        }
        else
        {
            a=x_new;
        }
        iter++;

    }
    cout<<endl<<x_new;
}
int main()
{
    bisection(0.5,1);
}
