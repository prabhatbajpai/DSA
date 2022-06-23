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
  	int a,ai,b;
  	bool f=1;
  	cin>>a>>b;
  	ai=a;
  	string s;
  	cin>>s;
  	int n=s.length();
  	int i=0,j=n-1;
  	while(i<=j){
  		if(i==j){
  			if(s[i]=='1')
  				b-=1;
  			else if(s[i]=='0')
  				a-=1;
  		}
  		else if(s[i]==s[j] && s[i]=='1')
  			b-=2;
  		else if(s[i]==s[j] && s[j]=='0')
  			a-=2;
  		i++;
  		j--;
  		if(a<0 || b<0)
  		{
  			f=0;
  			break;
  		}
  	}	
  	i=0;
  	j=n-1;
  	while(i<j){
  		if(s[i]!=s[j]&&(s[j]=='0'||s[i]=='0')&&(s[i]=='?'|| s[j]=='?')){
  			a-=2;
  			s[i]='0';
  			s[j]='0';
  		}
  		else if(s[i]!=s[j]&& (s[i]=='1'||s[j]=='1'&&(s[i]=='?'|| s[j]=='?'))){
  			b-=2;
  			s[i]='1';
  			s[j]='1';
  		}
  		if(a<0||b<0){
  			f=0;
  			break;
  		}
  		i++;
  		j--;
  	}
  	if(f){
  		i=0;
  		j=n-1;
  		while(i<=j){
  			if(i==j && s[i]=='?'){
  				if(ai%2){
  					s[i]='0';
  					a--;
  				}
  				else {
  					s[i]='1';
  					b--;
  				}
  			}
  			else{
  				if(s[i]=='?' && s[j]=='?'){
  					if(a>1){
  						s[i]='0';
  						s[j]='0';
  						a-=2;
  					}
  					else if(b>1){
  						s[i]='1';
  						s[j]='1';
  						b-=2;
  					}
  					else{
  						f=0;
  						break;
  					}
  				}
  			}
  			i++;
  			j--;
  		}
  	}
  	string st=s;
  	reverse(s.begin(),s.end());
  	if(f && s==st)
  		cout<<s<<endl;
  	else cout<<-1<<endl;
  }
  return 0;
}