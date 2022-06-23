#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
  IOS;
  int n;
  cin>>n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);
  vector<int> d(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  for(int i=0;i<n;i++){
    cin>>c[i];
  }
  for(int i=0;i<n;i++){
    cin>>d[i];
  }
  int bit=0,val=0,ans=-1e9;
  while(bit<32){
    int mx=-1e9,mi=1e9;
    for(int i=0;i<n;i++){
      val=0;
      if(bit%2==0)
      val+=i;
      else val-=i;
      if((bit>>1)%2)
      val-=a[i];
      else val+=a[i];
      if((bit>>2)%2)
      val-=b[i];
      else val+=b[i];
      if((bit>>3)%2)
      val-=c[i];
      else val+=c[i];
      if((bit>>4)%2)
      val-=d[i];
      mx=max(mx,val);
      else val+=d[i];
      mi=min(mi,val);
    }
    ans=max(ans,mx-mi);
    bit++;
  }
  cout<<ans<<endl;
}
