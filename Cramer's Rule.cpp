#include<bits/stdc++.h>
using namespace std;
float determinant(float d[3][3])
{
    return d[0][0]*((d[1][1]*d[2][2]) - (d[1][2]*d[2][1]))
    -d[0][1]*((d[1][0]*d[2][2]) - (d[1][2]*d[2][0]))
    + d[0][2]*((d[1][0]*d[2][1]) - (d[1][1]*d[2][0]));
}
int main()
{
    float d[3][3],dx[3][3],dy[3][3],dz[3][3];
    float b[3];
    cout<<"Enter matrix coeficient:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>d[i][j];
        }
        cout<<endl;
    }
     cout<<"Enter matrix constant:";
     for(int i=0;i<3;i++)
     {
         cin>>b[i];
     }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            dx[i][j]=(j==0)?b[i]:d[i][j];
            dy[i][j]=(j==1)?b[i]:d[i][j];
            dz[i][j]=(j==2)?b[i]:d[i][j];
        }
     }
     float d_t=determinant(d);
     cout<<d_t<<endl;
     float d_x=determinant(dx);
     float d_y=determinant(dy);
     float d_z=determinant(dz);
     float x=d_x/d_t;
     float y=d_y/d_t;
     float z=d_z/d_t;
     cout<<fixed<<setprecision(4);
     cout<<"X = :"<<x<< " "<<"Y = "<<y<< " "<< " Z = "<<z;
}
