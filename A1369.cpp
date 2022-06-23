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
    int n,c=0,m,k;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0,i=0;
    bool fg=false,mf=true;
    for(int i=0;i<n;i++){
      if(s[i]=='1')
      fg=true;
      if(fg && s[i]=='0')
      {
        mf=false;
        break;
      }
    }
    if(mf){
      cout<<s<<endl;
      continue;
    }
    while( i<n && s[i++]=='0'){
      x++;
    }
    x++;
    i=n-1;
    while(i>=0 && s[i--]=='1')
    y++;
    char a='0',b='1';
    string an="";
    an+=(string(x,a)+string(y,b));
    cout<<an<<endl;
  }
}
