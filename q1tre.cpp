#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

Node* remove(Node * root){
	if(!root)
		return NULL;
	if(root->val%5==0){
		if(root->left){
			root->val=root->left->val;
		}
		else{
			root->val=root->right->val;
		}
		else{
			
		}
	}
}

int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,m,k,c=0;
    string s="";
    bool fg=true;

    
  }
  return 0;
}
