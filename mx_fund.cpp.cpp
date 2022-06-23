#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=10000+5;
int parent[N];
vector<int> rnk(N);


int find(int u){
  if(parent[u]!=u){
    parent[u]=find(parent[u]);
  }
  return parent[u];
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
int32_t main(){
  IOS;
  int n,p;
  cin>>n;
  vector <int> a(n);
  for(int i=0;i<n;i++)
    {
      parent[i]=i;
      cin>>a[i];
    }
  cin>>p;
  for(int i=0;i<p;i++){
    int u,v;
    cin>>u>>v;
    u--;
    v--;
    unio(u,v);
  }
  map<int,int> mp;
  // for(int i=0;i<n;i++){
  //   cout<<parent[i]<<endl;
  // }
  int mx=0;
  for(int i=0;i<n;i++){
    int t=find(i);
    mp[t]+=a[i];
    mx=max(mx,mp[t]);
  }
  cout<<mx<<endl;
  return 0;
}
