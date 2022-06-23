#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
  int n;
  cin>>n;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  	b[i]=a[i];
  }
  int ans=n,c=0;
  int mx=1e9,mi=-1e9;
  for(int i=0;i<n-1;i++){
  	if(i%2==0){
  		if(b[i]<=b[i+1]){
  			b[i]=mx;
  			c++;
  		}
  	}
  }
  return 0;
}
