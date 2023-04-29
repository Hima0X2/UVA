/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int ext_gcd(long long int a,long long int b,long long int c,long long int p,long long int *X,long long int *Y,long long int *Z){
long long int r1,r2,r,q,x1,x2,x,y,y1,y2,z1,z2,z;
x2=1,y2=0,x1=0,y1=1;
for(r2=a,r2=b;r!=0;x2=x1,x1=x,y2=y1,y1=y,r2=r1,r1=r,z2=z1,z1=z){
q=r2/r1;
r=r2%r1;
x=x2-q*x1;
y=y2-q*y1;
z=z2-q*z1;
}
*X=x2,*Y=y2,*Z=z2;
return r2;
}
bool linearDiophantine(long long int a,long long int b,long long int c,long long int p,long long int *x,long long int *y,long long int *z){
long long int g=__gcd(a,__gcd(b,c));
if(p%g!=0){
     return false;
}
a=a/g,b=b/g,c=c/g;
if(g<0){
    a=a*-1;
    b=b*-1;
    c=c*-1;
}
ext_gcd(a,b,c,p,x,y,z);
*x *= c; *y *= c;*z *= c;
return true;
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,a,b,c,p,x,y,z;
     cin>>t;
     while(t--){
cin>>a>>b>>c>>p;
bool ok=linearDiophantine(a,b,c,p,&x,&y,&z);
if(ok){
     cout<<x<<" "<<y<<" "<<z<<endl;
}
else{
     cout<<0<<endl;
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




