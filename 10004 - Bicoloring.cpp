/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e5+123;
vector<long long int> adj[mx];
long long int col[mx];
int bicolor(int s)
{
     memset(col,0,sizeof(col));
    queue<long long int> q;
    q.push(s);
    col[s]=1;
    while(!q.empty())
    {
        long long int u=q.front();
        q.pop();
        int color;
        if(col[u]==1){
          color=2;
        }
        else{
          color=1;
        }
          for(auto v:adj[u]){
               if(col[v]==0){
                    col[v]=color;
                    q.push(v);
               }
               else if(col[v]==col[u]){
                    return 0;
               }
          }
    }
    return 1;
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,e,u,v;
     while(1){
                cin>>n;
          if(n==0){
               break;
          }
          for ( int i = 0; i < mx; i++ ) {
                    adj[i].clear();
          }
          cin>>e;
          for(i=1;i<=e;i++){
               cin>>u>>v;
               adj[u].push_back(v);
               adj[v].push_back(u);
          }
          if(bicolor(0)==0){
               cout<<"NOT BICOLORABLE.\n";
          }
          else{
               cout<<"BICOLORABLE.\n";
          }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
