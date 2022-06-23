#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N= 100;
vector<int> edge[N];
int vis[N];
void dfs(int s){
	vis[s]=1;
	for(auto it: edge[s]){
		if(!vis[it]){
			dfs(it);
		}
	}
	cout<<s<<" ";
	return;
}
void bfs(int s){
	queue<int> q;
	q.push(s);
	vis[s]=1;
	while(!q.empty()){
		int temp=q.front();
		q.pop();
		vis[temp]=1;
		cout<<temp<<" ";
		for(auto it:edge[temp]){
			if(!vis[it]){
				q.push(it);
				vis[it]=1;
			}
		}
	}
	return;
}

int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int v,e,k,c=0;
    cin>>v>>e;
    while(e--){
    	int s,d;
    	cin>>s>>d;
    	edge[s].push_back(d);
    	edge[d].push_back(s);
    }
    memset(vis,0,sizeof(vis));
     dfs(0);
    cout<<endl;
    memset(vis,0,sizeof(vis));
    bfs(0);
    cout<<endl;    
  }
  return 0;
}
