
#include<iostream>
#include<cmath>
using namespace std;
double g(double x)
{
    return ((0.4*x*x+4.7)/2.2);
}
void iteration_method(double a)
{
    double new_x;
    double old_x=0;
    int step=0;
    double epsilon=1e-3;
    while(1)
    {
        step++;
      new_x=g(a);
      if(fabs(new_x-old_x)<epsilon)///fabs is a positive functions
      {
          break;
      }
      else
      {
          old_x=new_x;
      }
    }
    cout<<"Roots is:"<<new_x<<endl<<"Total step: "<<step;
}
int main()
{
    int a;
    cout<<"Enter a:";///if function is logarithm or exponential a=3.2,else a=0.5
    cin>>a;
    iteration_method(3.2);
}
