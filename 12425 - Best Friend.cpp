/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e6+123;
int is_prime[mx];
vector<int> prime;
vector<long long int> div;
void Prime(int n){
     int i,j;
  for(i=4;i<n;i=i+2){
     is_prime[i]=1;
}
for(i=3;i<sqrt(n);i=i+2){
     if(is_prime[i]==0){
          for(j=i*i;j<n;j=j+(i+i)){
               is_prime[j]=1;
          }
     }
}
is_prime[0]=is_prime[1]=1;
for(i=2;i<n;i++){
     if(is_prime[i]==0){
          prime.push_back(i);
     }
}
}
int phi(long long int n){
     int c=n;
     for(auto u:prime){
          if(1LL*u*u>n||n==0){
               break;
          }
          if(n%u==0){
                    c=c/u;
          c=c*(u-1);
               while(n%u==0){
                    n=n/u;
               }
          }
     }
     if(n>1){
          c=c/n;
          c=c*(n-1);
     }
     return c;
}
void divisor(long long int n){
     int i;
     for(i=1;i<=sqrt(n);i++){
          if(n%i==0){
         div.push_back(i);
         if(n/i!=i){
           div.push_back(n/i);
         }
          }
     }
}
int main()
{
     optimize();
     long long int t,i,n,d=0,q,x,p,lim=1e6;
     Prime(lim);
     cin>>t;
     while(t--){
          vector<long long int> v;
cin>>n>>q;
cout<<"Case "<<++d<<endl;
div.clear();
divisor(n);
for(auto u:prime){
   long long int m=phi(1LL*(n/u));
    v.push_back(m);
}
for(int i=1; i<v.size(); i++){
        v[i]=v[i]+v[i-1];
    }
while(q--){
     cin>>x;
if(x<1){
     cout<<0<<endl;
}
else if(x>=n){
     cout<<n<<endl;
}
else{
long long int q=upper_bound(div.begin(),div.end(),x)-div.begin();
cout<<v[q-1]<<endl;
}
}
}
}
/// ALHAMDULILLAH
