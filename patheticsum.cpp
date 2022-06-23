#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int vis[100],a[100];
void dfs(int root,int s,int sum, vector<int> edge[],bool f){
  vis[root]=1;
  for(auto it: edge[root]){
    if(!vis[it]){
      dfs(it,s+1,sum+1,edge,!f);
      vis[it]=1;
    }
  }
  if(f){
    a[root]=1;
  }
  else{
    a[root]=2;
  }
  return ;

}
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,m,k,c=0;
    string s="";
    bool fg=true;
    memset(vis,0,sizeof(vis));
    memset(a,0,sizeof(a));
    cin>>n;
    vector<int> edge[n];
    for(int i=0;i<n-1;i++){
      int u,v;
      cin>>u>>v;
      u--;
      v--;
      edge[u].push_back(v);
      edge[v].push_back(u);
    }
    dfs(0,1,1,edge,true);
    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
    cout<<endl;

  }
  return 0;
}
