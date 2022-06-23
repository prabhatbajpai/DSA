#include<bits/stdc++.h>
#define edge adj;
using namespace std;
stack<int> st;

void dfs(int s, vector<int> edge[], bool vis[])
{
  vis[s]=true;
  for (auto it:edge[s]){
    if(!vis[it]){
      dfs(it,edge,vis);
    }
  }
  st.push(s);
}
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    // Your code here
    int s1;
    queue<int> q;
    vis[s]=true;
    q.push(s);
    while(!q.empty()){
        s1=q.front();
        cout<<s1<<" ";
        q.pop();
        for(auto it: adj[s1]){
            if(!vis[it]){
                vis[it]=true;
                q.push(it);
            }
        }
    }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,e;
    cin>>n>>e;
    vector <int> edge[n];
    bool vis[n];
    memset(vis ,false,sizeof(vis));
    for(int i=0;i<e;i++){
      int u,v;
      cin>>u>>v;
      edge[u].push_back(v);
      edge[v].push_back(u);
      }
    dfs(0,edge,vis);
    while(!st.empty()){
      int t=st.top();
      st.pop();
      cout<<t<<" ";
    }
    cout<<endl;
  }
}
