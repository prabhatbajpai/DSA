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
    cin>>n;
    if(n==1)
    	cout<<9<<endl;
    else{
    	cout<<98;
    	m=9;
    	n-=2;
    	while(n--){
    		cout<<m;
    		m++;
    		m%=10;
    	}
    	cout<<endl;
    }
    
  }
  return 0;
}
