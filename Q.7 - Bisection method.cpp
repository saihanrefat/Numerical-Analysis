#include<iostream>
#include<math.h>
using namespace std;
float f(float x)
{
    return 6*x*x*x-5*x*x-7*x-2;
}
void bisection(float x,float y)
{
    float ea=1;///Initial estimated;
    float es=0.1;///required estimated;
    float x_new,x_old;
    int iter=0;
    while(1)
    {
        x_old=x_new;
        x_new=(x+y)/2;

        if(iter>0)
        {
            ea=fabs((x_new-x_old)/x_new)*100.0;
        }
         cout<<iter+1<<" "<<x<<" "<<y<<" "<<x_new<<" ";
         if(iter>0)
         {
             cout<<ea<<endl;
             if(ea<=es)
             {
                 break;
             }
         }
         else
            cout<<endl;

        if(f(x)*f(x_new)<0)
        {
            y=x_new;
        }
        else
        {
            x=x_new;
        }
        iter++;
    }
    cout<<iter<< " "<<x_new;

}
int main()
{
    bisection(0.0,1.0);
}
