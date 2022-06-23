#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n;
    vector<int> a(3);
    bool fg=true;
    for(int i=0;i<n;i++){
      cin>>q;
      if(!fg)
      continue;
      if(q==5)
      a[0]++;
      else if(q==10){
        if(a[0]>0){
          a[0]--;
          a[1]++;
        }
        else{
          fg=false;
        }
      }
      else if(q==15){
        if(a[1]>0){
          a[1]--;
          a[2]++;
        }
        else if(a[0]>=2){
          a[0]-=2;
          a[2]++;
        }
        else fg=false;
      }
    }
    if(fg)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}
