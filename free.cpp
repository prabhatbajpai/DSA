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
    int n,m,k,c=0;
    string s="";
    bool fg=true;
    cin>>n;
    int mx=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ini=0,ine=0,dei=0,dee=0,mxi=1,mxd=1,ei=0,ii=0,ed=0,id=0;
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){
            ine++;
            if(ine-ini+1>mxi){
                mxi=ine-ini+1;
                ei=ine;
                ii=ini;
            }
        }
        else{
            ini=i;
            ine=i;
        }
        if(a[i]<=a[i-1]){
            dee++;
            if(dee-dei+1>mxd){
                mxd=dee-dei+1;
                id=dei;
                ed=dee;
            }
        }
        else{
            dei=i;
            dee=i;
        }
    }
    vector<int> s1;
    vector<int> s2;
    for(int i=ii;i<=ei;i++){
        cout<<a[i]<<" ";
        s1.push_back(a[i]);
    }
    cout<<endl;
    for(int i=id;i<=ed;i++){
        cout<<a[i]<<" ";
        s2.push_back(a[i]);
    }
    cout<<endl;
    int mat[s1.size()+1][s2.size()+1];
    memset(mat,0,sizeof(mat));
    for(int i=1;i<=s1.size();i++){
        for(int j=1;j<=s2.size();j++){
            if(s1[i-1]==s2[j-1]){
                mat[i][j]=mat[i-1][j-1]+1;
            }
            else{
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
            }
            mx=max(mat[i][j],mx);
        }
    }
    cout<<mx<<endl;
  }
  return 0;
}
