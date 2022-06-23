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
    int n,m,k,c=0;
    string s="";
    cin>>n;
    vector<int>a(n+7);
    a[0]=1;
    for(int i=0;i<n+2;i++){
      if(i-1>=0){
        a[i]+=a[i-1];
      }
      if(i-2>=0)
        a[i]+=a[i-2];
      if(i-3>=0)
        a[i]+=a[i-3];
    }
    cout<<a[n+1];
    if(t!=0)
      cout<<endl;
  }
  return 0;
}
