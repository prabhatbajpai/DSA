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
    int n,m,k,x,c=0;
    string s="";
    bool fg=true;
    cin>>x>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int j=0,p=1;
    for(int i=0;i<a.size();i++){
    	p*=a[i];
    	while(p>=x && j<=i){
    		c+=(i-j);
    		p/=a[j++];
    	}
    }
    p=(n-j)*(n-j+1)/2;
    cout<<c+p<<endl;
  }
  return 0;
}
