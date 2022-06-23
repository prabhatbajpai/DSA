#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool cmp(pair<int,int> p1,pair<int,int> p2){
	return p1.second>p2.second;
}
int32_t main(){
  IOS;
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++){
  	cin>>v[i].first;	
  }
  map<int,int> mp;

  for(int i=0;i<n;i++){
  	cin>>v[i].second;
  	mp[v[i].second]=i;
  }
  sort(v.begin(),v.end(),cmp);
  int s=0;
  vector<int> b(n);
  for(int i=0;i<n;i++)
  {
  	//cout<<v[i].first<<" "<<v[i].second<<endl;
  	a[mp[v[i].second]]=v[i].first+s;
  	b[mp[v[i].second]]=v[i].first;
  	s+=v[i].first;
  }
  // 
  int q,x,y;
  cin>>q;
  while(q--){
  	cin>>x>>y;
  	x--;
  	if(a[x]>=y && a[x]<=y*k-b[x]+1)
  		cout<<"YES"<<endl;
  	else cout<<"NO"<<endl;
  }
  return 0;
}
