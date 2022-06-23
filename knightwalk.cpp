#include<bits/stdc++.h>
using namespace std;
int vis[21][21],a[21][21];
bool valid(int w,int e,int n){
    return (w>0&&e>0&&w<=n&&e<=n);
}
int mvx[]={1,1,2,2,-1,-1,-2,-2};
int mvy[]={2,-2,1,-1,2,-2,1,-1};
void bfs(int s3,int s4,int d3,int d4,int n){
    queue<pair<int,int> >q;
    q.push(make_pair(s3,s4));
    vis[s3][s4]=1;
    a[s3][s4]=0;
    while(!q.empty()){
        int s1=q.front().first;
        int s2=q.front().second;
        q.pop();
        for(int i=0;i<8;i++){
            int tx=s1+mvx[i];
            int ty=s2+mvy[i];
            if(valid(tx,ty,n)&&vis[tx][ty]==0){
                vis[tx][ty]=1;
                a[tx][ty]=a[s1][s2]+1;
                q.push(make_pair(tx,ty));

            }
            if(tx==d3&&ty==d4)
            return ;
        }

    }
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int s3,s4,d4,d3,n,m;
	    cin>>n;
	    cin>>s3>>s4;
	    cin>>d3>>d4;
	    memset(vis,0,sizeof(vis));
	    memset(a,0,sizeof(a));
	    bfs(s3,s4,d3,d4,n);

	    cout<<a[d3][d4]<<endl;
	}
	return 0;
}
