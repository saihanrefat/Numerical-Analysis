#include<iostream>
#include<cmath>
using namespace std;
double f(double x)
{
    return exp(-x)-x;
}
double f_d(double x)
{
    return -exp(-x)-1;
}
void newton_rapson(double initial)
{
    if(f_d(initial)==0)
    {
        cout<<"Number are incorrect";
        return;
    }
    int i=0;
    int maxiter=100;
    double final;
    double tolerance=0.01;
    do
    {
       final=initial-(f(initial)/f_d(initial));
       cout<<++i<<" "<<"Initial"<<" "<<initial<< " "<<"Final"<<" "<<final<<endl;
       if(fabs(final-initial)<tolerance)
       {
           break;
       }
       else
       {
           initial=final;
       }
    }while(i<maxiter);
    cout<<"Root is "<<final;
}
int main()
{
  newton_rapson(1.0);
}
