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
    int a,b,c,p,q,r;
    cin>>a>>b>>c;
    cin>>p>>q>>r;
    if(a==p && b==q && c==r)
    {
      cout<<0<<endl;
      continue;
    }
    if((p-a==q-b  && p-a==r-c && r-c==q-b)||(a==p ||b==q || c==r)){
      cout<<1<<endl;
      continue;
    }
    if((a!=0 && b!=0 && p/a==q/b) && (a!=0 &&c!=0 && p/a==r/c) && (b!=0 && c!=0 &&q/b==r/c)||(a==p ||b==q || c==r))
    {
      cout<<1<<endl;
      continue;
    }
    if(p-a==q-b || p-a==r-c || r-c==q-b){
      cout<<2<<endl;
      continue;
    }
    if((a!=0 && b!=0 && p/a==q/b) || (a!=0 && c!=0 && p/a==r/c) ||(b!=0 && c!=0 &&q/b==r/c))
    {
      cout<<2<<endl;
      continue;
    }
    if((c!=0 &&((a+q-b)*(r/c)==p ||a*(r/c)+q-b==p))||((b!=0)&& ((a+r-c)*(q/b)==p || (a*(q/b)+r-c)==p))||(b!=0 && c!=0) && a*(q/b)*(r/c)==p||a+(q-b+r-c)==p){
      cout<<2<<endl;
      continue;
    }
    if((c!=0 && ((b+p-a)*(r/c)==q ||b*(r/c)+p-a==q))||(a!=0 && ((b+r-c)*(p/a)==q || (b*(p/a)+r-c)==q))||(a!=0 && c!=0&& b*(p/a)*(r/c)==q)||b+(p-a+r-c)==q){
      cout<<2<<endl;
      continue;
    }
    if((a!=0 &&((c+q-b)*(p/a)==r ||c*(p/a)+q-b==r))||(b!=0 && ((c+p-a)*(q/b)==r || (c*(q/b)+p-a)==r))||( b!=0 && a!=0 && c*(q/b)*(p/a)==r)||c+(q-b+p-a)==r){
      cout<<2<<endl;
      continue;
    }
    cout<<3<<endl;
  }
}
