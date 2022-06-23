#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
  IOS;
  int n,m,k,c=0,w=3;
  n=9;
  m=20;
  char grid[9][20];
  bool inf[9][20];
  for(int i=0;i<9;i++){
  	for(int j=0;j<20;j++){
  		inf[i][j]=0;
  	}
  }
  for(int i=8;i>=0;i--){
	 for(int j=0;j<20;j++)
		 cin>>grid[i][j];
  }
  int mvx=1,mvy=1,i=0,j=0,dir=0;
  //cout<<i<<" "<<j<<endl;
 // cout<<grid[1][12]<<endl;
  while(w!=0){
  	cout<<i<<" "<<j<<endl;
  	//cout<<mvx<<" "<<mvy<<endl;
  	//cout<<grid[j][i]<<endl;
  	
  	if(grid[j][i]=='a'){
  		if(mvx==1 && mvy==1){
  			mvx=-1;
  		}
  		else if(mvx==1 && mvy==-1){
  			mvy=1;
  		}
  		else if(mvx==-1 && mvy==1){
  			mvy=-1;
  		}
  		else if(mvx==-1 && mvy==-1){
  			mvx=1;
  		}
  		inf[j][i]=1;
  	}
  	else if(grid[j][i]=='c'){
  		if(mvx==1 && mvy==1){
  			mvy=-1;
  		}
  		else if(mvx==1 && mvy==-1){
  			mvx=-1;
  		}
  		else if(mvx==-1 && mvy==1){
  			mvx=1;
  		}
  		else if(mvx==-1 && mvy==-1){
  			mvy=1;
  		}
  		inf[j][i]=1;	
  	}
  	else if(grid[j][i]=='*'){
  		if(w>0){
  			if(i==0){
  				mvx=1;
  			}
  			else if(i==20){
  				mvx=-1;

  			}
  			if(j==0){
  				mvy=1;
  			}
  			else if(j==8){
  				mvy=-1;
  			}
  			//i+=mvx;
  			//j+=mvy;
  			w--;
  		}
  		else break;
  	}
  	i+=mvx;
  	j+=mvy;
  }
  //cout<<inf[1][12]<<endl;
  int tot=0;
  for(int i=8;i>=0;i--){
  	for(int j=0;j<20;j++){
  		if(grid[i][j]=='a'|| grid[i][j]=='c'){
  			if(inf[i][j]==1){
  				cout<<'-';
  				c++;
  			}
  			else {
  				cout<<grid[i][j];
  				tot++;
  			}
  		}
  		else cout<<grid[i][j];
  	}
  	cout<<endl;
  }
  string s1="safe=",s2="infected=";
  cout<<s1<<tot<<endl;
  cout<<s2<<c;

  return 0;
}
