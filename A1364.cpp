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
    int n,m=-1,k,c=0;
    string s="";
    bool fg=true;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	c+=a[i];
    	if(c%k!=0){
    		//cout<<c<<endl;
    		m=i+1;
    	}
    }
    c=0;
    for(int i=n-1;i>=0;i--){
    	c+=a[i];
    	if(c%k!=0){
    		m=max(m,n-i);
    	}
    }
    cout<<m<<endl;
  }
  return 0;
}
