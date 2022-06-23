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
    string s="";
    bool fg=true;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        c+=(s[i]-'0');
        if(i!=n-1 && s[i]-'0'>=1)
            c+=1;
    }
    cout<<c<<endl;
  }
  return 0;
}
