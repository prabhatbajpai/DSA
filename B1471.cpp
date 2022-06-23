#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
  IOS;
  int t,c=0;
  string s;
  cin>>s;
  int n=s.size();
  int a[10]={0};
  while(s.size()!=1){
  	c++;
  	t=0;
  	for(int i=0;i<s.size();i++){
  		t+=(s[i]-'0');
  	}
  	s=to_string(t);
  }
  cout<<c<<endl;
  return 0;
}
