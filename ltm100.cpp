#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int mx=1e6+7;
const int N=1e6+3;
//bool num[N];
bool ifd(unsigned int n,unsigned int m){
    if((n &((1<<m)-1))==0)
        return true;
    return false;
}
unsigned int a[]={2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648,4294967296,8589934592,17179869184,34359738368,68719476736,137438953472,274877906944,549755813888,1099511627776,2199023255552,4398046511104,8796093022208,17592186044416,35184372088832,70368744177664,140737488355328,281474976710656,562949953421312,1125899906842624,2251799813685248,4503599627370496,9007199254740992,18014398509481984,36028797018963968,72057594037927936,144115188075855872,288230376151711744,576460752303423488,1152921504606846976,2305843009213693952,4611686018427387904};
int32_t main(){
  IOS;
  int t;
  cin>>t;
  vector<bool> num(N,0);
  num[0]=1;
  num[1]=1;
  num[2]=0;
  num[3]=1;
  num[4]=1;
  for(int i=5;i<N-3;i++){
    if(i%2){
        num[i]=!num[i-1];
    }
    else{
        for(auto it:a){
            num[i]=0;
            if(i>=it && i%it==0){
                unsigned int m=i/it;
                if(m>=0 && m<N-1 && num[m]==0)
                {
                    num[i]=1;
                    break;
                }
            }  
        }
    }
  }
  while(t--){
    unsigned int n,m,k,c=0,l,r;
    cin>>n;
    //cout<<"Bob"<<endl;
    if(n>=N-3){
        cout<<"Bob"<<endl;
    }
    else{
        if(!num[n])  
            cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;

        }
    }
  return 0;
}
