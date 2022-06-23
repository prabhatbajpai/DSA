#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
  IOS;
  int t=0,m=0,n,x,y;
  string s;
  cin>>n;
  for(int i=0;i<n;i++){
  	cin>>s;
  	if(s.size()>10){
  		string temp="";
  		temp+=s[0];
  		temp+=(to_string(s.size()-2));
  		temp+=s[s.size()-1];
  		cout<<temp<<endl;
  	}
  	else cout<<s<<endl;
  }
  return 0;
}
