#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n;
     cin>>t;
    string s;
     for(i=0;i<t;i++)
     {
          cin>>s;
          n=s.length();
          if(n==5){
               cout<<"3"<<endl;
          }
         else{
int c=0;
          if(s[0]=='o')c++;
          if(s[1]=='n')c++;
         if(s[2]=='e')c++;

         if(c>1) cout<<"1"<<endl;
         else cout<<"2"<<endl;
     }
}
     return 0;
}
