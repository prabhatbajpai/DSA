#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
  IOS;
  int t;
  cin>>t;
  int mx1=pow(10,18);
  while(t--){
    int n,m,k,c=0,a,b,x,y;
    cin>>a>>b>>x>>y>>n;
    int a1,b1,n1;
    a1=a;
    b1=b;
    n1=n;
    int mx=mx1;
    	if(a-n>=x){
    		a=a-n;
    		mx=min(mx,a*b);
    	}
    	else{
    		int temp=a-x;
    		a=x;
    		n=n-temp;
    		if(b-n>=y){
    			b=b-n;
    		}
    		else b=y;
    		mx=min(mx,a*b);
    	}
    
    a=a1;
    b=b1;
    n=n1;
    	if(b-n>=y){
    		b=b-n;
    		mx=min(mx,a*b);
    	}
    	else{
    		int temp=b-y;
    		b=y;
    		n=n-temp;
    		if(a-n>=x){
    			a=a-n;
    		}
    		else a=x;
    		mx=min(mx,a*b);
    	}
    cout<<mx<<endl;
  }
  return 0;
}
