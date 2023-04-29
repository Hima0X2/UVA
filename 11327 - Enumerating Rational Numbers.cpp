/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
vector<long long int> k;
vector<long long int> kl;
void hi()
{
    long long int i,j;
    for(i=1; i<=200000; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(__gcd(i,j)==1)
            {
                k.push_back(j);
                kl.push_back(i);
            }
        }
    }
}
int main()
{
    optimize();
    hi();
    long long int t,i,n;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            return 0;
        }
       // cout<<k[n]<<"/"<<kl[n]<<endl;
       cout<<k[0]<<endl;
    }
}
/// ALHAMDULILLAH




