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
    int n,m,k,c=0;
    cin>>n;
    m=n;
    vector<int> ans;
    c=1;
    if(!(n&1)){
        cout<<2<<endl;
        cout<<n+1<<" ";
        cout<<1<<endl;
    }
    else{
        n-=1;
        while(n!=0){
            
        }
    }
  }
  return 0;
}
