#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a[1000],i,c=0,j=1;
     while(cin>>n){
               if(n==0)break;
     for(i=1;i<=n;i++)
     {
          cin>>a[i];
          if(a[i]==0){
               c--;
          }
          else
          {
               c++;
          }
     }
     cout<<"Case "<<j<<": "<<c<<endl;
     c=0;
     j++;
     }
}
