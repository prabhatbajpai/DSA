#include<bits/stdc++.h>
using namespace std;
// bool DFSUtil(vector<int> *adj, int u, vector<bool> &visited, int parent)
// {
//    visited[u]=true;                 // Mark the node as visited
//    for(auto v: adj[u])              // Run for all the adjacent nodes of that vertex
//    {
//        if(!visited[v])              // If vertex is not visited
//        {
//            if(DFSUtil(adj, v, visited, u))  // Run DFS for the adjacent vertex
//             return true;
//        }
//        else if(v!=parent)
//             return true;
//    }
//    return false;
// }
//

// bool isCyclic(vector<int> adj[], int V)
// {
//    vector<bool> visited(V, false);  // Created a visited vector intially all false(unvisited)
//    for(int u=0;u<V;u++)             // Traversing through every node
//    {
//        if(!visited[u])              // If vertex is not already visited
//           if(DFSUtil(adj,u,visited,-1)) // call DFS on that vertex
//             return true;                // If function contains cycle return true
//    }
//    return false;                        // Else return false
// }
bool dfs(vector<int> edge[],int s,bool vis[],int parent){
  vis[s]=true;
  for(auto it:edge[s]){
  if(!vis[it]){
    if(dfs(edge,it,vis,s))
    return true;
  }
  else if(s!=parent)
    return true;
  }
  return false;
}
bool isCyclic(vector<int> edge[],int n){
  bool vis[n]={false};
  for(int i=0;i<n;i++){
    if(!vis[i])
    if(dfs(edge,i,vis,-1))
    return true;
  }
  return false;
}




int main(){
  int t;
  cin>>t;
  while(t--){
    int n,e;
    cin>>n>>e;
    vector<int> edge[n];
    for(int i=0;i<e;i++){
      int u,v;
      cin>>u>>v;
      edge[u].push_back(v);
      edge[v].push_back(u);
    }
    cout<<isCyclic(edge,n)<<endl;
  }
}
