#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int mx=1e9+7;
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,m=10e5,k,c=0,nz=0;
    bool fg=true;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        if(i>0 && a[i]>a[i-1]){
            c+=(m-a[i]);
        }
        
    } 
  }
  return 0;
}