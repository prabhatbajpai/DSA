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
    string s="";
    bool fg=true;
    cin>>n>>k;
    cin>>s;
    int prev=0;
    for(int i=1;c<k-1 && i<n;i++){
        if(s[prev]==s[i]){
                prev=i;
        }
        else{
            prev=i;
            c++;
        }
    }
    int mx=-1;
    for(int i=prev;i<s.size();i++){
        if(s[i]!=s[prev])
            mx=i;
    }
    if(mx==-1)
    cout<<mx<<endl;
    else cout<<mx+1<<endl;

    
  }
  return 0;
}
