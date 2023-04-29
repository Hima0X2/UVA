#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k,m,n,i,j,x,y;
     while(cin>>k){
               if(k==0)break;
               cin>>x>>y;
     for(i=0;i<k;i++)
     {
          cin>>m>>n;
     if((m==x)||(n==y))
     {
          cout<<"divisa"<<endl;
     }
    else if(m < x && n > y)
     {
         cout<<"NO"<<endl;
     }
        else if(m > x && n > y)
     {
         cout<<"NE"<<endl;
     }
       else if(m < x && n < y)
     {
         cout<<"SO"<<endl;
     }
     else
     {
          cout<<"SE"<<endl;
     }
     }
}
}
