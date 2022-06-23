#include <bits/stdc++.h>
#define int long long 
using namespace std;
vector<int> rid2(vector<int> arr) {
    vector<int> temp;
    if(arr.size()==1)
        return arr;
    int mx=arr[0];
    for(int i=1;i<arr.size();i++){
        int  d=min(arr[i],arr[i-1]);
        temp.push_back(d);
        mx=max(mx,arr[i]);
        // cout<<d<<endl;
        // cout<<mx<<endl;
    }
    // for (auto j:arr)
    // 	cout<<j<<" ";
    //cout<<endl;
   	cout<<mx<<" ";
    return rid2(temp);
}


int32_t main(){
    int n,m=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=max(m,a[i]);
    }
    //cout<<m<<" ";
    vector<int> q=rid2(a);
    cout<<q[0]<<endl;
    return 0;
}
