#include<bits/stdc++.h>
using namespace std;
struct cell{
  int x,y;
};
int stx[]={-1,1,0,0};
int sty[]={0,0,-1,1};
bool valid(cell s,int n){
  if(s.x<n && s.y<n && s.y>=0&& s.x>=0)
  return 1;
return 0;
}
bool bfs(vector<vector<int> > &m,vector<vector<int>> &vis,cell s,int n)
{
  queue<cell>q;
  q.push(s);
  while(!q.empty()){
    cell s1=q.front();
    vis[s1.x][s1.y]=2;
    q.pop();
    for(int i=0;i<4;i++){
      cell temp;
      temp.x=s1.x+stx[i];
      temp.y=s1.y+sty[i];
      if(valid(temp,n)){
        if(m[temp.x][temp.y]!=0){
          if(vis[temp.x][temp.y]==0)
          {
            q.push(temp);
            vis[temp.x][temp.y]=1;
            if(m[temp.x][temp.y]==2)
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<vector<int> > m(n,vector<int> (n));
    vector<vector<int> > vis(n,vector<int> (n));
    cell s;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
      cin>>m[i][j];
      vis[i][j]=0;
      if(m[i][j]==1){
        s.x=i;
        s.y=j;
      }
    }
    }
    cout<<bfs(m,vis,s,n)<<endl;
  }
}
