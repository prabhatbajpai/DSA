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
    string s1,s2;
    cin>>n;
    cin>>s1;
    cin>>s2;
    bool flag=true;
    int z=-1,o=0,e=0,f=1;
    int to=0,tw=0;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            if(s1[i]=='0')
                e++;
            else o++;
        }
        if(s2[i]=='0')
            to++;
        else tw++;
    }
    if(to==n&& (e==0 ^ o==0))
        cout<<"NO"<<endl;
    else if(tw==n && (e==0^o==0))
         cout<<"NO"<<endl;
     else
        cout<<"YES"<<endl;
    }
  return 0;
}
