#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
struct node{
	bool eow;
	node *child[26];
};
struct node * getnode(void){
	node * pnode =new node;
	pnode->eow=false;
	for(int i=0;i<26;i++)
		pnode->child[i]=NULL;
	return pnode;
}
void insert ( node* root,string key){
	node * pc=root;
	for(int i=0;i<key.length();i++){
		int id=key[i]-'a';
		if(!pc->child[id])
			pc->child[id]=getnode();
		pc=pc->child[id];
	}
	pc->eow=true;
}
bool search(struct node * root,string key){
	node *pc= root;
	for(int i=0;i<key.length();i++){
		int id=key[i]-'a';
		if(!pc->child[id])
			return false;
		pc=pc->child[id];
	}
	return (pc!=NULL && pc->eow);
}
int32_t main(){
  IOS;
  int t;
  cin>>t;
  while(t--){
    int n,m,k,c=0;
    cin>>n>>m;
    vector<string> s(n);
    node* root =new node;

    for(int i=0;i<n;i++){
    	cin>>s[i];
    	insert(root,s[i]);

    }
    for(int i=0;i<m;i++){
    	string q;
    	cin>>q;
    	if(search(root,q)){
    		cout<<"present"<<endl;
    	}
    	else cout<<"not present"<<endl;
    }
    
  }
  return 0;
}
