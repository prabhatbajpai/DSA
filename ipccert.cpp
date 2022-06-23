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
    int n,m,k,c=0,ai=-1;
    cin>>n;
    int mx=1e9+7;
    int a[n+1],b[n+1];
    memset(a,0,sizeof(a));
    bool f=false;
    for(int i=0;i<n;i++){
    	cin>>k;
    	a[k]++;
    	b[k]=i+1;
    }
 	for(int i=1;i<=n;i++){
 		if(a[i]==1){
 			ai=b[i];
 			break;
 		}
 	}   
    cout<<ai<<endl;
  }
  return 0;
}
