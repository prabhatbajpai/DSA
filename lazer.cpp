#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
  int x;
  int y;
};
bool oSt(node p, node q, node r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;

    return false;
}
int on(node p,node q,node r)
{
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if(val == 0) return 0;
    return (val > 0)? 1: 2;
}
bool dIs(node p1, node q1, node p2, node q2)
{
    int o1 = on(p1, q1, p2);
    int o2 = on(p1, q1, q2);
    int o3 = on(p2, q2, p1);
    int o4 = on(p2, q2, q1);
    if (o1 != o2 && o3 != o4)
        return true;
    if (o1 == 0 && oSt(p1, p2, q1)) return true;
    if (o2 == 0 && oSt(p1, q2, q1)) return true;
    if (o3 == 0 && oSt(p2, p1, q2)) return true;
    if (o4 == 0 && oSt(p2, q1, q2)) return true;

    return false;
}

int32_t main(){
  int t;
  cin>>t;
  while (t--) {
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector <node> a(n);
    for(int i=0;i<n;i++){
      a[i].x=i+1;
      a[i].y=arr[i];
  
    }
    while(q--){
      int x1,x2,yl;
      int c=0,c2=0;
      cin>>x1>>x2>>yl;
      struct node is1,is2;
      is1.x=x1;
      is1.y=yl;
      is2.x=x2;
      is2.y=yl;
      for(int i=0;i<n-1;i++){
        if(dIs(a[i],a[i+1],is1,is2)){
          c++;
          if((a[i+1].x==is2.x) && (a[i+1].y==is2.y)&& i!=n-2){
          c2++;
        }
        }
      }
      cout<<c-c2<<endl;
    }
  }
}
