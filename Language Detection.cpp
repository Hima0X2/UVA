#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,b="#";
     int i=1,n;
     while(cin>>s)
     {
          if(s==b)break;
          if(s=="HALLO")
          {

                    cout<<"Case "<<i<<": "<<"GERMAN"<<endl;}
               else if(s=="HELLO")
               {
                    cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
               }
               else if(s=="HOLA")
               {
                    cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
               }
           else if(s=="BONJOUR")
          {
              cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
          }
          else if(s=="ZDRAVSTVUJTE")
          {
               cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
          }
          else if(s=="CIAO")
          {
               cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
          }
          else
          {
                cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
          }
          i++;
     }
}

