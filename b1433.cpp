#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int mx=1e9+7;
int32_t exp(int x, int y, int md)
{
    int res=1;
    x=x%md;
    while(y)
    {
        if(y&1)
        {
            res = (res*x)%md;
        }
        x = (x*x)%md;
        y = y>>1;
    }
    return res;
}
 
int32_t modinv(int n, int p)
{
    return exp(n, p-2, p);
}
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,m,k=0,c=0;
    string s="";
    bool fg=false;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    	cin>>a[i];
    for(int i=0;i<n;i++){
    	if(a[i]){
    		if(fg)
    		c+=k;
    		fg=true;
    		k=0;
    	}
    	else k++;
    }
    cout<<c<<endl;
  }
  return 0;
}
