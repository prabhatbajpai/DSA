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
    cin>>s;
    n=s.size();
    while(s.size()>=2 && fg){
    	int i;
    	for( i=0;i<s.size()-1;i++){
    		if(s[i]!=s[i+1]){
    			c++;
    			break;
    		}
    	}
    	if(i==s.size()-1)
    		break;
    	string q="";
    	for(int j=0;j<s.size();j++){
    		if(j!=i+1 &&  j!=i){
    			q+=s[j];
    		}
    	}
    	//cout<<q<<endl;
    	s=q;
    }
    //cout<<c<<endl;
    if(c%2){
    	cout<<"DA"<<endl;
    }
    else cout<<"NET"<<endl;
    
  }
  return 0;
}
