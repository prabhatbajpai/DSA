/* Read input from STDIN. Print your output to STDOUT*/
#include<bits/stdc++.h>
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=10e6+1;
int prime[N],comm[N];
int calc(){
    for(int i=2;i<N;i++){
        prime[i]=1;
        comm[i]=0;
    }
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<sqrt(N);i++){
        if(prime[i])
        for(int j=2;i*j<N;j++){
            prime[i*j]=0;
        }
    }
    for(int i=2;i<N;i++){
        comm[i]=comm[i]+comm[i-1]+prime[i];
    }
    return 0;
}
int32_t main(){
	IOS;
    int tc;
    cin>>tc;
    int m=calc();
    while(tc--){
        int l,r;
        cin>>l>>r;
        // cout<<comm[r];
        // cout<<comm[l];
        // cout<<prime[r];
        int t=comm[r]-comm[l]+prime[l];
        if(t==0)
            cout<<-1<<endl;
        else if(t==1)
            cout<<0<<endl;
        else {
            int t1=l,t2=r;
            for(int i=l;i<r;i++){
                if(prime[i]){
                    t1=i;
                    break;
                }
            }
            for(int i=r;i>l;i--){
                if(prime[i]){
                    t2=i;
                    break;
                }
            }
            cout<<t2-t1<<endl;
        }
    }
    return 0;
}