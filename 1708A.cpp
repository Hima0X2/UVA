/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ok=1;
        long long int sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
         //cout<<sum<<endl;
        for(i=n-1; i>=1; i--)
        {
            // cout<<a[i]<<" "<<sum<<endl;
            if(a[i]%(sum-a[i])==0)
            {
                sum=sum-a[i];
            }
            else
            {
                ok=0;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




