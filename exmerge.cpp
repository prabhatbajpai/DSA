#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
// void merge(vector<int> & a,int p,int q,int md ){
// 	vector<int> t1,t2;
// 	for(int i=p;i<=md;i++){
// 		t1.push_back(a[i]);
// 	}
// 	for(int i=md+1;i<q;i++){
// 		t2.push_back(a[i]);
// 	}
// 	t1.push_back(INT_MAX);
// 	t2.push_back(INT_MAX);
// 	int c=0,i=0,j=0;
// 	while(p+c<=q){
// 		if(t1[i]<t2[j]){
// 			a[p+c]=t1[i++];
// 		}
// 		else{
// 			a[p+c]=t2[j++];
// 		}
// 		c++;
// 	}
// }
// void mergesort(vector<int> & a,int p,int q){
// 	if(p<q){
// 		int md=(p+q)/2;
// 		mergesort(a,p,md);
// 		mergesort(a,md+1,q);
// 		merge(a,p,q,md);
// 	}
// }

vector<vector<int> > edge;
int mst(int s,int n){
	set<pair<int,int> > st;
	int vis[n];
	memset(vis,0,sizeof(vis));
	int dis[n];
	for(int i=0;i<n;i++){
		dis[i]=INT_MAX;
	}
	dis[s]=0;
	vis[s]=1;
	st.insert(make_pair(0,s));
	while(!st.empty()){
		auto it= *(st.begin());
		dis[it.second]=min(dis[it.second],it.first);
		vis[it.second]=1;
		st.erase(st.begin());
		for(int i=0;i<n;i++){
			if(edge[it.second][i]!=0){
			int wt=edge[it.second][i]+dis[it.second];
			if(dis[i]>wt){
				auto f=st.find(make_pair(dis[i],i));
				if(f!=st.end())
					st.erase(f);
				dis[i]=wt;

				st.insert(make_pair(dis[i],i));
			}
		}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=dis[i];
	}
	return sum;
}

int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int r,n;
	cin>>n;
	vector<int> temp;
	for(int i=0;i<n;i++){
		temp.clear();
		for(int j=0;j<n;j++){
			cin>>r;
			temp.push_back(r);
		}
		edge.push_back(temp);
	}
	cout<<mst(0,n);
  }
  return 0;
}
