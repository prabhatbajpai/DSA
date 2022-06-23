#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> edge[n];
    while(m--){
        int x,y,d;
        cin>>x>>y>>d;
        x--;
        y--;
        edge[x].push_back(make_pair(y,d));
    }
    vector<int> path(n,INT_MAX);
    vector<bool> vis(n,false);
    path[0]=0;
    set<pair<int,int> > s;
    s.insert(make_pair(0,0));
    while(!s.empty()){
        auto f= *(s.begin());
        vis[f.second]=1;
        s.erase(s.begin());
        for(auto it: edge[f.second]){
            if(!vis[it.first]){
                int temp =path[f.first]+ max(it.second-path[f.first],0ll);
                if(temp<path[it.first]){
                    auto temp=s.find(make_pair(path[it.first],it.first));
                    if(temp!=s.end())
                        s.erase(temp);
                    path[it.first]=temp;
                    s.insert(make_pair(temp,it.first));
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        if(vis[i])
            cout<<path[i]<<" ";
        else cout<<"NO PATH EXISTS"<<" ";
    }
}
