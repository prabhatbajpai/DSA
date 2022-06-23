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
    string s;
    cin>>s;
 	int a[26];
 	memset(a,0,sizeof(a));
 	for(int i=0;i<s.size();i++)
 	{
 		a[s[i]-'a']++;
 	}
 	int su=0,n=s.size();
 	for(int i=0;i<26;i++){
 		su+=a[i]/2;
 	}
 	cout<<min(su,n/3)<<endl;
  }
  return 0;
}
