#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool edge[60][60];
bool fg=false;
int v;
bool isSafe(int color[]){
	for(int i=0;i<v;i++){
		for(int j=i+1;j<v;j++){
			if( edge[i][j]& color[j]==color[i])
				return false;
		}
	}
	return true;
}

bool graphcol(int m, int color[],int i){
	if(i==v){
		if(isSafe(color)){
			fg=true;
			return true;
		}
		return false;
	}
	for(int j=1;j<=m;j++){
		color[i]=j;
		if(graphcol(m,color,i+1))
		{
			fg=true;
				return true;
		}
		color[i]=0;

	}
	return false;
}
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
  int m,e;
  cin>>v>>m>>e;
  memset(edge,0,sizeof(edge));
  while(e--){
  	int u,q;
  	cin>>u>>q;
  	u--;
  	q--;
  	edge[u][q]=1;
  	edge[q][u]=1;
  }
  int color[v];
 	if(graphcol(m,color,0)){
 		cout<<"yes"<<endl;
 		for(int i=0;i<v;i++){
 			cout<<color[i]<<" ";
 		}
 		cout<<endl;
 	}
 }
  return 0;
}
