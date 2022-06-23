#include<bits/stdc++.h>
#define sutu (ll)1e18+10
#define int long long
using namespace std;
// int  a[200000];
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
      int x1,x2,y1,y2;
      cin>>x1>>y1>>x2>>y2;
      if(x1==x2)
      cout<<1<<endl;
      else if(y1==y2)
      cout<<1<<endl;
      else{
      int x=max(x1,x2)-min(x1,x2);
      int y=max(y1,y2)-min(y1,y2);
      int k=min(x,y),n=x+y;
      // int den=1,num=1;
      // for(;k>0;k--,n--){
      //   num*=n;
      //   den*=k;
      //   if(num%den==0){
      //     num/=den;
      //     den=1;
      //   }
      // }
      //int s=(1*pow(2,x-1))+(1*pow(2,y-1));
      cout<<((x2-x1)*(y2-y1))+1<<endl;
        }
  }
}
