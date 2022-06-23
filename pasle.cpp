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
    int n,m,k,c=1;
    cin>>n;
    if(n==1)
    {
    	cout<<1<<endl;
    	continue;
    }
    vector<int> temp;
    temp.push_back(1);
    for(int i=0;i<n;i++){
    	for(int i=0;i<temp.size();i++)
    		cout<<temp[i]<<" ";
    	cout<<endl;
    	std::vector<int> v;
    	v.push_back(1);
    	for(int i=0;i<temp.size()-1;i++)
    		v.push_back(temp[i]+temp[i+1]);
    	v.push_back(1);
    	temp=v;
    }
    
  }
  return 0;
}
