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
    int n,m,k,c=0,st=0,ed=0;
    cin>>n>>k;
    priority_queue<int> heap;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
    	if(s[i]=='0'){
    		int j=i;
    		c++;
    		while(j<n && s[j]=='0'){
    			j++;
    		}
    		if(i==0){
    			st=j-i;
    		}
    		else if(j==n){
    			ed=j-i;
    		}
    		else heap.push(j-i);
    		i=j-1;
    	}
    }
    int ans=0;
    c=0;
    if(k%2==0){
    	heap.push(st+ed);
    	while(!heap.empty()){
    			int temp=heap.top();
    			heap.pop();
    			if(c<k){
    				c+=2;	
    			}
    			else{
    				ans+=temp;
    			}
    	}
    	cout<<ans<<endl;
    }
    else{
    	heap.push(min(st,ed));
    	k--;
    	while(!heap.empty()){
    		int temp=heap.top();
    		heap.pop();
    		if(c<k){
    			c+=2;
    		}
    		else{
    			ans+=temp;
    		}
    	}
    	cout<<ans<<endl;
    }
    
  }
  return 0;
}
