#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int mx=1e9+7;
int32_t main(){
   int  t;
   cin>>t;
   while(t--){
   	 int n;
   	 cin>>n;
   	 string s,p;
   	 cin>>s>>p;
   	 bool f=true;
   	 int l=0,r=n-1;
   	 priority_queue<int,vector<int> ,greater<int>> pq1;
   	 priority_queue<int,vector<int> ,greater<int>> pq2;

   	 for(int i=0;i<n;i++){
   	 	if(s[i]!=p[i]){
   	 		if(p[i]=='0'){
   	 			pq1.push(i);	
   	 		}
   	 		else {
   	 			pq2.push(i);
   	 		}
   	 	}
   	 }
   	 while(f && pq1.size()!=0 && pq2.size()!=0){
   	 	l=pq1.top();
   	 	r=pq2.top();
   	 	//cout<<"here"<<l<<" "<<r<<endl;
   	 	if(l<r){
   	 		pq1.pop();
   	 		pq2.pop();
   	 	}
   	 	else f=false;
   	 }
   	 if(pq1.size()!=pq2.size())
   	 	f=false;
   	 if(f)
   	 	cout<<"Yes"<<endl;
   	 else cout<<"No"<<endl; 	
   }
}