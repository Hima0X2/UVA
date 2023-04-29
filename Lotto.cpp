#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a[100];
     int i,j;
     cin>>n;
      for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     for(i=0;i<n;i++)
     {
          int x=a[i],p=i;
          for(j=i-1;j>=0;j--){
               if(a[j]<x)
               {
                    p=j;
               }
               else
               {
                    break;
               }
          }
          for(j=i-1;j>=p;j--){
               a[j+1]=a[j];
          }
          a[p]=x;
          for(i=0;i<n;i++){
          cout<<a[i]<<" ";
          cout<<endl;
     }
     }

}
