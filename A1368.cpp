#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
  IOS;
  int t;
  cin>>t;
  string s="codeforces";
  int a[]={1,1,1,1,1,1,1,1,1,1};
  int i=0,c=1;
  while(c<t){
    a[i]++;
    i++;
    i=i%10;
    int k=1;
    for(int j=0;j<10;j++)
        k=k*a[j];
    c=k;
  }
  string ans="";
  for(int j=0;j<10;j++)
    ans+=string(a[j],s[j]);
  cout<<ans<<endl;
}
