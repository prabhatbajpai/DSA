#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
  IOS;
  int t,n;
  cin>>n;
  t=n;
  vector<int> edge[n+1];
  t--;
  while(t--){
  	int u,v;
  	cin>>u>>v;
  	u--;
  	v--;
  	edge[u].push_back(v);
  	edge[v].push_back(u);
  }
  int mn=INT_MAX;
  for(int j=0;j<n;j++){
  queue<pair<int,int>> q;
  vector<int> dis(n);
  vector<int> vis(n,0);
  for(int i=0;i<n;i++)
  	dis[i]=INT_MAX;
  dis[j]=0;
  q.push(make_pair(j,0));
  while(!q.empty()){
  	auto e=q.front();
  	vis[e.first]=1;
  	dis[e.first]=min(dis[e.first],e.second);
  	q.pop();
  	for(auto it: edge[e.first]){
  		if(!vis[it]){
  			q.push(make_pair(it,e.second+1));
  			vis[it]=1;
  		}
  	}
  }
  int mx=0;
  for(int i=0;i<n;i++)
  	mx=max(mx,dis[i]);
  //cout<<mx<<endl;
  mn=min(mx,mn);
}
  cout<<mn<<endl;
  return 0;
}
