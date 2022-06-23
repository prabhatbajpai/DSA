#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=3000;
int dp[N][N],lup[N][N];
int32_t main(){
  IOS;
  int t,n;
  cin>>n;
  memset(dp,0,sizeof(dp));
  memset(lup,0,sizeof(lup));
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++)
  {
	cin>>a[i];
	b[i]=a[i];
  }
  int mx=0,mxi=0,mxj=0;	
  reverse(a.begin(),a.end());
  // for(int i=0;i<n;i++)
  // 		cout<<b[i]<<endl;
  for(int i=0;i<n;i++){
  	for(int j=0;j+i<n-1;j++){
  		if(i==0 || j==0){
  			dp[i][j]=a[i]*b[j];
  			lup[i][j]=0;
  		}
  		else{
  			int t=a[i]*b[j];
  			if(t>dp[i-1][j-1]+t){
  				dp[i][j]=t;
  				lup[i][j]=false;
  			}
  			else{
  				dp[i][j]=dp[i-1][j-1]+t;
  				lup[i][j]=true;
  			}
  		}
  		if(dp[i][j]>mx){
  			mx=dp[i][j];
  			mxi=i;
  			mxj=j;
  		}
  	}
  }
  // for(int i=0;i<n;i++)
  // {
  // 	for(int j=0;j<n;j++){
  // 		cout<<dp[i][j]<<" ";
  // 	}
  // 	cout<<endl;
  // }
  
  if(mx==0){
  	//cout<<"is here"<<endl;
  	sort(a.begin(),a.end());
  	cout<<a[0]<<endl;
  	cout<<a[1]<<endl;
  }
  else{
  	cout<<mx<<endl;
	  // vector<int> ans1,ans2;
	  // while(lup[mxi][mxj]){
	  // 	ans1.push_back(a[mxi]);
	  // 	ans2.push_back(b[mxj]);
	  // 	mxi--;
	  // 	mxj--;
	  // }
	  // ans1.push_back(a[mxi]);
	  // ans2.push_back(b[mxj]);
	  // for(int i=0;i<ans1.size();i++){
	  // 	cout<<ans1[i]<<" ";
	  // }
	  // cout<<endl;
	  // reverse(ans2.begin(),ans2.end());
	  // for(int i=0;i<ans2.size();i++){
	  // 	cout<<ans2[i]<<" ";
	  // }
	  // cout<<endl;
}
  return 0;
}
