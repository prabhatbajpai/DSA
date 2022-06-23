#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=100;
int cl[N]={0},rd[100]={0},ld[100]={0};
bool solve(vector<vector<int> > &board ,int cle){

	if(cle>=board.size())
		return 1;
	int n=board.size();
	for(int i=0;i<board.size();i++){

		if(ld[i-cle+n-1]!=1 && rd[i+cle]!=1 && cl[i]!=1){
			board[i][cle]=1;
			ld[i-cle+n-1]=1;
			cl[i]=1;
			rd[i+cle]=1; 
			if(solve(board,cle+1))
				return true;		
		
			board[i][cle]=0;
			ld[i-cle+n-1]=0;
			cl[i]=0;
			rd[i+cle]=0;
		}
	}
	return false;
} 
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,m,k,c=0;
  	cin>>n;
  	vector<vector<int> > board(n,vector<int> (n,0));
  	if(solve(board,0)){
  		for(int i=0;i<n;i++){
  			for(int j=0;j<n;j++){
  				cout<<board[i][j]<<" ";
  			}
  			cout<<endl;
  		}
  	}
    else cout<<"NO sol exist"<<endl;
  }
  return 0;
}
