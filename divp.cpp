#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    string s="";
    int c=0,te=2;
while(1){
  c=(te*(te-1))/2;
  if(k<=c)
  break;
  k-=c;
  te++;
}
cout<<te<<" "<<k<<endl;
te--;
k--;
te=n-te;
k=n-k;
for(int i=0;i<n;i++)
{
  if(i==k-1||i==te-1)
  s=s+'b';
  else
  s=s+'a';
}
    cout<<s<<endl;
  }
}
