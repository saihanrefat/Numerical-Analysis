#include<iostream>
#include<cmath>
using namespace std;
double fa(double x)
{
    return -0.4*x*x+2.2*x+4.7;
}
void Falsi_method(double a,double b)
{
    if(fa(a)*fa(b)>=0)
    {
        cout<<"fa(a)*fa(b) !<0"<<endl<<"Number are incorrect";
        return;
    }
    double new_c;
    double old_c=a;
    int step=1;
    double epsilon=1e-3;
    while(1)
    {
        step++;
      new_c=(a*fa(b)-b*fa(a))/(fa(b)-fa(a));
      if(fabs(new_c-old_c)<epsilon)///fabs is a positive functions
      {
          break;
      }
      else if(fa(a)*fa(new_c)<=0)
      {
          b=new_c;
      }
      else
      {
          a=new_c;
      }
      old_c=new_c;
    }
    cout<<"Roots is:"<<new_c<<endl<<"Total step: "<<step;
}
int main()
{
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    Falsi_method(a,b);
}
