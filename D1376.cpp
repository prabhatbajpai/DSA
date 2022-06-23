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
    int n,m,k,c=0;
	bool fg=true;
    cin>>n;
    vector<int> a(n);
    int s=0;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	if(i%2==0)
    		s+=a[i];
    }
    //std::vector<int > v;
    int cmx=0,mx=0;
    for(int i=0;i<n-1;i+=2){
    	mx=max(mx+a[i+1]-a[i],c);
    	cmx=max(mx,cmx);

    }
    mx=0;
    for(int i=2;i<n;i+=2){
    	mx=max(mx+a[i-1]-a[i],c);
    	cmx=max(mx,cmx);
    }
    cout<<s+cmx<<endl;
  }
  return 0;
}
