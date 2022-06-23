#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool cmp(int x,int y){
	return abs(x)>abs(y);
}
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,m,k,x,y,c=0;
    cin>>x>>y>>k;
    m=k+(y*k)-1;
    n=(m+x-2)/(x-1);
    cout<<n+k<<endl;

    
  }
  return 0;
}
