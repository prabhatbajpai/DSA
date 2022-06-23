#include<bits/stdc++.h>
//#define md (int32_t)1e9+7
#define int long long
using namespace std;
//int  a[1000007];
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int> a(n+1);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      a[n]=-1;
      map<int,int> mp1,mp2;
      int fq=1;
      for(int i=0;i<n;i++){
        if(a[i]==a[i+1])
          fq++;
        else{
          mp1[a[i]]++;
          mp2[fq]++;
          fq=1;
        }
      }
      bool fg=true;
      for(auto it: mp1){
        if(it.second!=1){
          fg=false;
          break;
        }
      }
      for(auto it: mp2){
        if(it.second!=1){
          fg=false;
          break;
        }
      }
      if(fg)
      cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  return 0;
}
