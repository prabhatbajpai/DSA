#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int mx=1e9+7;
vector<string> ans;
bool isvalid(string s){
    int p=0,q=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')
            p++;
        else p--;
        if(p<0)
            return 0;
    }
    if(p==0)
    return true;
    return false;
}
void maker(string s,int n){
    if(ans.size()==n)
        return;
    if(s.size()==2*n){
        if(isvalid(s)){
            ans.push_back(s);
            if(ans.size()==n)
                return;
        }
    }
    else{
        string tmp=s;
        maker(s+"(",n);
        maker(s+")",n);
    }
    return ;
}
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    vector<string> q;
    int n,m,k,c=0;
    string s="";
    bool fg=true;
    ans=q;
    cin>>n;
    string l="(";
    string r=")";
    string b="()";
    for(int i=1;i<=n;i++){
        s="";
        string s1="";
        for(int k=0;k<i;k++){
            s+=l;
            s1+=r;
        }
        s+=s1;
        for(int j=s.size()-1;j<2*n-1;j+=2)
            s+=b;

        cout<<s<<endl;
    }
    
  }
  return 0;
}
