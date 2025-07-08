#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x=0,y=0,z=0;
    float x_new,y_new,z_new;
    float epsilon=0.0001;
    cout<<fixed<<setprecision(3);
    cout<<setw(8)<<"x "<<setw(8)<<"y"<<setw(8)<<"z "<<setw(8)<<endl<<endl;
    do
    {
        x_new=(7.85+0.1*y+0.2*z)/3;
        y_new=(-19.3-0.1*x_new+0.3*z)/7;
        z_new=(71.4+0.2*y_new-0.3*x_new)/10;
      cout<<setw(8)<<x_new <<setw(8)<<y_new<<setw(8)<<z_new<<endl;
        if((fabs(x-x_new)<epsilon) && (fabs(y-y_new)<epsilon)&& (fabs(z-z_new)<epsilon))
        {
            break;
        }
        x=x_new;
        y=y_new;
        z=z_new;
    }while(true);

    cout<<endl<<"       x= "<<x_new<<" "<<"y= "<<y_new<<" "<<"z= "<<z_new<<endl;
}

