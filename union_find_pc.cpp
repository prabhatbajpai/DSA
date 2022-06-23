#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=100;
vector<int> edge[N];
int parent[N];
vector<int> rnk(N);

int find(int s){
	if(parent[s]!=s)
		parent[s]=find(parent[s]);
	return parent[s];
}

void unio(int u,int v){
																
	int ur=find(u);
	int vr=find(v);
	if(rnk[ur]>rnk[vr]){
		parent[vr]=ur;
	}
	else if(rnk[ur]<rnk[vr]){
		parent[ur]=vr;
	}
	else {
		parent[vr]=ur;
		rnk[ur]++;
	}

}

bool isCyle(int v){
	for(int i=0;i<v;i++){
		for(auto it: edge[i]){
			int x=find(i);
			int y=find(it);
			if(x==y)
				return 1;
			unio(x,y);
		}
	}
	return 0;
}
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,m,k,c=0,e,v;
    cin>>v>>e;
    for(int i=0;i<e;i++){
    	cin>>n>>m;
    	edge[n].push_back(m);
    	//edge[m].push_back(n);
    }
    for(int i=0;i<v;i++){
    	parent[i]=i;
    	rnk[i]=0;
    }
    cout<<isCyle(v)<<endl; 
  }
  return 0;
}
