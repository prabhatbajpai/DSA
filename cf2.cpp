#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> edge[n];
    vector<bool> p(n);
    vector<bool> b(n);
    // for(int i=0;i<n;i++){
    //   int temp;
    //   cin>>temp;
    //   int book;
    //   for(int j=0;j<temp;j++){
    //     int pri;
    //     cin>>pri;
    //     pri--;
    //     edge[i].push_back(pri);
    //   }
    //   for(int it=edge[i].size()-1;it>=0;it--){
    //     if(p[edge[i][it]]==0){
    //     p[edge[i][it]]=1;
    //     d[i]=1;
    //   //  cout<<i<<" is married to:"<<edge[i][it]<<endl;
    //     break;
    //
    //   }
    //   }
    // }
    for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      int te;
      bool flag=true;
        while(temp--){
          cin>>te;
          te--;
          if(flag){
            if(p[te]==0){
              p[te]=1;
              b[i]=1;
              flag=false;
            }
          }
        }
    }
    int op1,op2;
    bool imp=false,imp2=false;
      for(int i=0;i<n;i++){
          if(!b[i])
          {
            imp=true;
            op1=i+1;
          }
          if(!p[i]){
            imp2=true;
            op2=i+1;
          }
      }
if(imp&& imp2){
  cout<<"IMPROVE"<<endl;
  cout<<op1<<" "<<op2<<endl;

}
else cout<<"OPTIMAL"<<endl;


  }
}
