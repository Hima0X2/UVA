/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int pw(long long int b,long long int p,long long int m){
     if(p==0) return 1;
     if(p%2) return ((b*pw(b,p-1,m))%m);
     else{
          long long int k=pw(b,p/2,m)%m;
          return ((k*k))%m;
     }
}
int main()
{
     optimize();
     long long int t,i,x,n,y;
     cin>>t;
     while(t--){
cin>>x>>y>>n;
cout<<pw(x,y,n)%n<<endl;
     }
}
/// ALHAMDULILLAH




