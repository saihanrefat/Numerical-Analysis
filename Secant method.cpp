
#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return 3*x-cos(x)-1;
}
void Secant_Method(double a,double b)
{
    if(f(a)*f(b)>0)
    {
        cout<<"Invalid Function"<<endl;
        return;
    }
    double epsilon=0.0001;
    double c;
    cout << fixed << setprecision(4);
    cout << setw(10) << "a"
         << setw(10) << "b"
         << setw(10) << "c"
         << setw(12) << "f(a)"
         << setw(12) << "f(b)"
         << setw(12) << "f(c)" << endl;
    while(abs(a-b)>=epsilon)
    {
        c=a-((a-b)/(f(a)-f(b))*f(a));
        cout << setw(10) << a<< setw(10) << b<< setw(10) << c<< setw(12) << f(a)<< setw(12) << f(b)<< setw(12) << f(c) << endl;
       a=b;
       b=c;
    }
    cout<<endl;
    cout<<"Roots is:"<<c;
}
int main()
{
    Secant_Method(0,1);

}
