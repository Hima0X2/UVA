#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];
bool isPrime(long long int n){
     if(n==1||n==2){
          return false;
     }
     for(int i=3;i<n;i++){
          if(n%i==0){
               return false;
          }
     }
     return true;
}
int main()
{
     optimize();
     long long int t,n,i;
  while(cin>>n){
          if(n==0)break;
     long long int diff=-1,p=0,q=0;
     for(i=3;i<=(n-i);i++){
          if(isPrime(i)&&isPrime(n-i)){
               //cout<<i<<" "<<n-i<<endl;
                    if(abs(i-n+i)>diff){
                         diff=abs(i-n+i);
                         p=n-i;
                         q=i;
                         break;
                    }
      //diff=max(diff,abs(i-n+i));
          }
     }
  if(diff==-1){
     cout<<"Goldbach's conjecture is wrong."<<endl;
  }
  else{
     cout<<n<<" = "<<q<<" + "<<p<<endl;
  }
  }
}


