#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=3e5+5;
int a[N],pre[N],f[N],ans[N];
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,c=0;
    cin>>n;
   	for(int i=1;i<=n;i++){
   		cin>>a[i];
   		f[i]=pre[i]=0;
   		ans[i]=-1;
   	}
   	for(int i=1;i<=n;i++){
   		int x=a[i];
   		f[x]=max(f[x],i-pre[x]);
   		pre[x]=i;
   	}
   	for(int x=1;x<=n;x++){
   		f[x]=max(f[x],n-pre[x]+1);

   		for(int i=f[x];i<=n && ans[i]==-1;i++){
   			ans[i]=x;
   		}
   	}
   	for(int i=1;i<=n;i++)
   		cout<<ans[i]<<" ";
   	cout<<endl;
  }
  return 0;
}
