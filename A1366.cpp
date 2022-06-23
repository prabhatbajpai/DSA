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
    int a,b;
    cin>>a>>b;
    if(a>=2*b)
      cout<<b<<endl;
    else if(b>=2*a)
      cout<<a<<endl;
    else
      cout<<(a+b)/3<<endl;
  }
}
