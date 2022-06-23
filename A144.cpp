#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int32_t main(){
	IOS;
	int r,c=0,n,m,l;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		int j=i;
		while(j<n &&s[i]==s[j]){
			j++;
		}
		c+=(j-i-1);
		i=j-1;
	}
	cout<<c<<endl;
	return 0;
}