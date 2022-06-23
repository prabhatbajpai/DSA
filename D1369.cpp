#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N= 2*1e6;
const int md=1e9+7;
int dp[N+2];
int32_t main(){
  IOS;
  int t;
  cin>>t;
  dp[0]=0;
  dp[1]=0;
  dp[2]=4;
  for(int i=3;i<=N;i++){
  	dp[i]=dp[i-1]%md+(2*dp[i-2])%md+(i%3==2)*4;
  	dp[i]%=md;
  }
  while(t--){
  	int n;
  	cin>>n;
  	n--;
  	cout<<dp[n]<<endl;
  }
}