#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int mx=1e9+7;
int32_t main(){
  IOS;
  int n,r,j=0 ;
  cin>>n>>r;
  map< pair<int,int> , int> mp;
  vector<pair<int,int> > edge[n+2];
  //cout<<"all good";
  while(j++<r){
    int u,v,w,c,z;
    cin>>u>>v>>w;
    c=min(u,v);
    z=max(u,v);
    // edge[v].push_back(make_pair(u,w));
    // edge[u].push_back(make_pair(v,w));
    if(u!=v){      
      if(mp.find({c,z})==mp.end())
          mp[make_pair(c,z)]=w;
      else mp[make_pair(c,z)]=min(mp[make_pair(c,z)],w);
    }
  }
  for(auto itr: mp){
    auto m=itr.first;
    //cout<<m.second<<" "<<m.first<<endl;   
    edge[m.first].push_back(make_pair(m.second,itr.second));
    edge[m.second].push_back(make_pair(m.first,itr.second));
  }
  int vis[n+2],pre[n+2];
  pre[1]=0;
  memset(vis,0,sizeof(vis));
  set<pair<int,int> > s;
  vector<int> cost(n+2,mx);
  cost[1]=0;
  s.insert(make_pair(0,1));
  while(!s.empty()){
    auto it= *s.begin();
    s.erase(s.begin());
    vis[it.second]=1;
    cost[it.second]=min(cost[it.second],it.first);
    for(auto i:edge[it.second]){
      if(!vis[i.first]){
                int temp=max(it.first,i.second+it.first-pre[it.second]);
                if(temp<cost[i.first]){
                    auto f=s.find(make_pair(cost[i.first],i.first));
                    if(f!=s.end())
                    s.erase(f);
                    cost[i.first]=temp;
                    s.insert(make_pair(cost[i.first],i.first));
                    pre[i.first]=i.second;
                }

            }
    }
  }
  if(vis[n]==1){
    cout<<cost[n]<<endl;
  }
  else cout<<"NOT POSSIBLE"<<endl;
  return 0;
}
