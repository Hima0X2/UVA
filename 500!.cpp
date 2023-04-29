#include<bits/stdc++.h>
using namespace std;
int fac(long long int n){
 if(n==1)
{
     return 1;
}
else{
     return n*fac(n-1);
}
}
int main()
{
     long long int a,i,n;
     cin>>n;
     cout<<n<<"!"<<endl;
          a=fac(n);
     cout<<a<<endl;
}
