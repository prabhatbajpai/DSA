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
  	int n,m,l,r,x;
  	cin>>n>>x>>m;
  	l=x;
  	r=x;
  	for(int i=0;i<m;i++){
  		int L,R;
  		cin>>L>>R;
  		if(max(l,L)<=min(r,R)){
  			l=min(l,L);
  			r=max(r,R);
  		}
  	}
  	cout<<r-l+1<<endl;
  }
}