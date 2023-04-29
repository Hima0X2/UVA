/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int x, y, d;
long long int gcd(long long int a, long long int b){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    d=gcd(b, a % b);
    long long int x1,y1;
    x1 = y;
    y1= x - (a/b)*y;
    x=x1;
    y=y1;
    return d;
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t=2,i,n,a,b,d;
     while(scanf("%lld %lld", &a, &b) == 2){
d=gcd(a,b);
cout<<x<<" "<<y<<" "<<d<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
