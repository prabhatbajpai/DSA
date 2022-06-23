#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=300000+2;
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	string s;
  	cin>>s;
  	bool f1=false,f2=false;
  	for(int i=0;i<n;i++){
  		if(s[i]=='<')
  			f1=true;
  		if(s[i]=='>')
  			f2=true;
  	}
  	if(f1&&f2){
  		int c=0;
  		for(int i=0;i<n;i++){
  			if(s[i]=='-'||s[(i+1)%n]=='-') c++;
  		}
  		cout<<c<<endl;
  	}
  	else cout<<n<<endl;
  }
  return 0;
}
