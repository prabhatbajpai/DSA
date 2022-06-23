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
    int n,m,k,c=0,l,r,v1,v2,v3;
    cin>>k;
    bool f1=false,f11=false,f2=false;
    int a[k];
    vector<int> c(10,0);
    for(int i=0;i<k;i++){
        cin>>a[i];
        c[a[i]]++;
        if(i>0&& (a[i]==2||a[i]==5))
        {
            f2=true;
            v2=a[i];
        }
        if(c[a[i]]>=2)
            {
                f11=true;
                v11=a[i];
            }
        if(a[i]==1||a[i]==4||a[i]==6||a[i]==8||a[i]==9)
            {
                f1=true;
                v1=a[i];
            }
    }
    if(f1)
    {
        cout<<k-1<<endl;
        cout<<v1<<endl;

    }
    else if(f11){
        cout<<k-2<<endl;
        cout<<v11<<v11<<endl;
    }
    else if(f2){
        cout<<k-2<<endl;
        cout<<a[0]<<v2<<endl;
    }
    else{
        
    }
  }
  return 0;
}
