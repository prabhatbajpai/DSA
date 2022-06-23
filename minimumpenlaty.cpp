#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> > edge[n];
    while(m--){
        int u,v,d;
        cin>>u>>v>>d;
        u--;
        v--;
        edge[u].push_back(make_pair(v,d));
        edge[v].push_back(make_pair(u,d));
    }
    vector<int> dis(n,INT_MAX);
    vector<bool>vis(n,false);
    int so,d;
    cin>>so>>d;
    so--;
    d--;
    set<pair<int,int> > s;
    s.insert(make_pair(0,so));
    dis[so]=0;
    while(!s.empty()){
        auto it= *(s.begin());
        s.erase(s.begin());
        vis[it.second]=1;
        dis[it.second]=min(dis[it.second],it.first);
        for(auto itr: edge[it.second]){
            int temp= it.first|itr.second;
            if(temp<dis[itr.first]){
                auto f=s.find(make_pair(dis[itr.first],itr.first));
                if(f!=s.end())
                s.erase(f);
                s.insert(make_pair(temp,itr.first));
                dis[itr.first]=temp;
            }
        }
    }
    if(vis[d])
    cout<<dis[d]<<endl;
    else cout<<-1<<endl;

}
