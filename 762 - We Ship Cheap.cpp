/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e5+123;
map<string,int> vis;
map<string,vector<string> > adj;
map<string,string> par;
void bfs(string s)
{
    vis[s]=1;
    queue<string> q;
    q.push(s);
    while(!q.empty())
    {
        string v=q.front();
        q.pop();
        for(auto u:adj[v])
        {
            if(vis[u]==0)
            {
                vis[u]=vis[v]+1;
                par[u]=v;
                q.push(u);
            }
        }
    }
}
int main()
{
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,ok=1;
    string u,v;
    while(cin>>n)
    {
         if(ok){
         cout<<endl;
         }
         ok=0;
          adj.clear();
           vis.clear();
     par.clear();
        for(i=0; i<n; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        string s,d;
        cin>>s>>d;
        bfs(s);
        if(vis[d]==0)
        {
            cout<<"No route\n";
            continue;
        }
        vector<pair<string,string> > path;
        while(!par[d].empty())
        {
            path.push_back({par[d],d});
            d=par[d];
        }
        reverse(path.begin(),path.end());
        for(auto u:path)
        {
            cout<<u.first<<" "<<u.second<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
