
#include<iostream>
#include<math.h>
using namespace std;
float f(float x)
{
    return pow(x,4)-8*pow(x,3)-35*pow(x,2)+450*x-1001;
}
void False_Position(float a,float b)
{
    float x_new=a;
    float x_old;
    int iter=0;
    float Es=2.0;
    float Ea=100.0;
    while(1)
    {
       x_old=x_new;
       x_new=(a*f(b)-b*f(a))/(f(b)-f(a));
       if(iter>0)
       {
           Ea=fabs((x_new-x_old)/x_new)*100;
       }
       cout<<a<<"  "<<b<<"  "<<x_new<<"  "<<f(a)<<"  "<<f(b)<<"  "<<f(x_new)<<"  "<<Ea<<endl;

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
    False_Position(4.5,6);
}
