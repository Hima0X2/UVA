#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k,t,c=0,x;
     string s,b;
     cin>>k;
     for(t=0;t<k;t++)
     {
          cin>>s;
          if(s=="report")
          {
               cout<<c<<endl;
          }
          else
          {
               cin>>x;
               c=c+x;
          }
     }
}
