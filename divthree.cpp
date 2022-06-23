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
    int n,m,k,c=0,l,s=0;
   	cin>>n>>m;
   	priority_queue<int,vector<int>,greater<int> > pq1;
   	priority_queue<int> pq2;
   	for(int i=0;i<n;i++){
   		cin>>l;
   		s+=l;
   		pq1.push(l);
   	}
   	int ans=0;
   	for(int i=0;i<m;i++){
   		cin>>l;
   		c+=l;
   		pq2.push(l);
   	}
   	while(s<=c && !pq1.empty() && !pq2.empty() && pq1.top()<pq2.top()){
   		int p1,p2;
   		ans++;
   		p1=pq1.top();
   		pq1.pop();
   		p2=pq2.top();
   		pq2.pop();
   		s+=(p2-p1);
   		c+=(p1-p2);
   		pq1.push(p2);
   		pq2.push(p1);
   		
   	}
   	if(s>c)
   		cout<<ans<<endl;
   	else cout<<-1<<endl;
    
  }
  return 0;
}
