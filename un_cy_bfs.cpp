#include<bits/stdc++.h>
using namespace std;
bool bfs(int s,vector<int> edge[],bool vis[],int n){
  int s1;
  int Parent[n]={-1};
  queue<int> q;
  vis[s]=true;
  q.push(s);
  while(!q.empty()){
    s1=q.front();
    q.pop();
    for (auto it: edge[s1]){
      if(s1==it)
      return true;
      Parent[it]=s1;
      // if(vis[it])
      //   return true;
       //&&
        if(vis[it] && Parent[s1]!=it) return true;
      if(!vis[it]){
        vis[it]=true;
        q.push(it);
      }
    }
  }
  return false;
}

bool isCyclic(vector<int> edge[], int n){
  for(int i=0;i<n;i++){
  bool vis[n]={false};
  if (bfs(i,edge,vis,n))
  return true;
}
return false;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    vector<int> edge[n];
    for(int i=0;i<m;i++){
      int u,v;
      cin>>u>>v;
      edge[u].push_back(v);
      edge[v].push_back(u);
    }
    cout<<isCyclic(edge,n)<<endl;
  }
}
