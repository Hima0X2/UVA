#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,s,a,b,c,d,e,f,g;
     cin>>t;
     for(a=0;a<t;a++)
     {
          cin>>s;
          b=(s*567)/9;
          c=(b+7492)*235;
          d=(c/47)-498;
          //cout<<d<<endl;
          f=d%100;
          g=f/10;
          //cout<<e<<endl;
         //cout<<f<<endl;
         cout<<abs(g)<<endl;
     }
}
