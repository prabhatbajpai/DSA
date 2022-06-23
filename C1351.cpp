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
    string s;
    cin>>s;
    set<pair<int,int> > st;
    bool fg=true;
    int x=10000,y=10000;
    s=s+'c';
    st.insert(make_pair(x,y));
    for(int i=0;i<s.size();i++){
    	if(st.find(make_pair(x,y))==st.end()){
    		c+=4;
    		st.insert(make_pair(x,y));
    	}
    	 c+=1;
    	if(s[i]=='S'){
    		y--;
    	}
    	else if(s[i]=='N')
    		y++;
    	else if(s[i]=='W'){
    		x--;
    	}
    	else if(s[i]=='E')
    	 x++;
    }
    cout<<c<<endl;
    st.clear();
  }
  return 0;
}
