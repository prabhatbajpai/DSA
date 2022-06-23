#include<bits/stdc++.h>
//#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int mx=1e9+7;
int32_t main(){
  IOS;
  int t,o=0;
  cin>>t;
  while(t--){
    o++;
    cout<<"Case #"<<o<<": ";
    int n,d,k;
    cin>>n>>d>>k;
    vector<priority_queue<int,vector<int>,greater<int> > > vq(n+2);
    while(d--){
        int q,u,v;
        cin>>q>>u>>v;
        for(int i=u;i<=v;i++){
            vq[i].push(q);
        }
    }
    int mx=0;
    for(int i=1;i<=n;i++){
        int s=0;
        while(vq[i].size()>k)
            vq[i].pop();
        while(!vq[i].empty()){
            s+=vq[i].top();
            vq[i].pop();
        }
        mx=max(mx,s);
    }
    cout<<mx<<endl;
  }
  return 0;
}
