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
    int l,r;
    cin>>l>>r;
    if(r<l*2)
      cout<<r<<endl;
    else{
      cout<<-1<<endl;
      }

    
  }
  return 0;
}
