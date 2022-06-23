#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t{
	IOS;
	int x,y,z,mx,my,mz;
	cin>>x>>y>>z;//cost per mt^2 building 
	cin>>mx>>my>>mz;//max area allocated per type
	cin>>mnx>>mmx>>mny>>mmy>>mnz>>mmz;//minmum and max per 
	cin>>tot;
	int c=mnx*x+mny*y+mnz*z;
	tot-=(mnx+mny,mnz);
	mmx-=mnx;
	mmy-=mny;
	mmz-=mnz;
	vector<int> val;
	val.push_back(mmx);
	val.push_back(mmy);
	val.push_back(mmz);
	
}
