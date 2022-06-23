#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main(){
 int t,ans=0;
 cin>>t;
 while(t--){
 	int n,x,y,pl;
 	int temp;
 	cin>>temp;
 	cin>>n>>x>>y>>pl;
 	vector<string> vs;
 	vs.push_back("Charlie");
 	vs.push_back("Carlos");
 	int id=pl,w=pl;
 	while(n>0){
 		if(n<=y){
 			n=0;
 			w=id;
 			break;
 		}
 		else{
 			n=n-x;
 		}
 		id=(id+1)%2;
 	}
 	if(id==1)
 		ans++;
 }
  cout<<ans<<endl;
  return 0;
}
