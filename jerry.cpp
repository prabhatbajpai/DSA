#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int mx=1e9+7;
int32_t main(){
  IOS;
  int t,s=0;
  cin>>t;
  while(t--){
    int n,m=0,k=1,c;
    cin>>n;
    while(n!=1){
        int p=-1;
        for(int i=2;i<=ceil(sqrt(n));i++){
            if(n%i==0){
                p=i;
                // cout<<"find p"<<p<<endl;
            }
        }
        if(p!=-1){
            // cout<<"add k "<<k<<endl;
            m+=k;
            // cout<<"vlaues are"<<p<<" "<<n/p<<endl;
            k*=max(p,n/p);
            n=min(p,n/p);
            // cout<<"max mul k"<<k<<endl;
        }
        else{
             m+=k;
             // cout<<"add k"<<k<<endl;
             k*=n;  
             n=1;
             break;    
        }
    }
    // cout<<"add k"<<k<<endl;
    m=m+k;
    // cout<<m<<endl;
    s+=m;
  }
    bool fg=true;
    cout<<s<<endl;
  return 0;
}
