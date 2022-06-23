#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  char st[1000];
  map<string,int> mp;
  fgets(st);
  vector<string> ans;
  string s="";
  int i=0;
  while(st[i]!='\0'){
  	if(st[i]==' '){
  		if(mp.find(s)==mp.end() && s!=""){
  			ans.push_back(s);
  			mp[s]=1;
  			s="";
  		}
  	}
  	else s+=st[i];
  	i++;
  }
  if(mp.find(s)==mp.end() && s!=""){
  			ans.push_back(s);
  			mp[s]=1;
  			s="";
  		}
  for(int i=0;i<ans.size();i++)
  	cout<<ans[i]<<" ";
  cout<<endl;
  return 0;
}
