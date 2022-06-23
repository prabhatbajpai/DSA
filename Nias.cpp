#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> b(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=(a[i]*b[i]);
	}
	if(s)
		cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
  return 0;
}
