#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i=0;
     string s;
     while(cin>>s)
     {
          if(s=="*")break;
          else
          {
               i++;
               if(s=="Hajj")
               {
                     cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
               }
               else if(s=="Umrah")
               {
                     cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;

               }
          }
     }
}
