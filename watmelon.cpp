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
    int n,m,k,c=0;
    bool fg=true;
    k=0;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
    	cin>>m;
  		if(m>i+1){
  			fg=false;
  		}
  		else{
  			if(i+1==m){
  				s.insert(m);
  			}
  			else{
  				if(__gcd(i+1,m)==m && s.find(m)!=s.end()){
  					continue;
  				}
  				else fg=false;
  			}
  		}
    }
    if(!fg){
    	cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
  }
  return 0;
}
