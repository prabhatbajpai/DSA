#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m,temp;
    cin>>n>>m;
      vector<int>v;
      v.push_back(n*10+m);
      while(n!=m){
        if(n>m)
        {
          n--;
          m++;
          v.push_back(n*10+m);
        }
        else if(m>n){
          m--;
          n++;
            v.push_back(n*10+m);
        }
      }
      while(n!=1&&m!=1){
        n--;
        m--;
        v.push_back(n*10+m);

      }
      cout<<45+8+v.size()<<endl;
      for (int i=0;i<v.size();i++)
      cout<<int(v[i]/10)<<" "<<v[i]%10<<endl;
      for(int i=2;i<9;i++)
      cout<<i<<" "<<i<<endl;
      cout<<7<<" "<<7<<endl;
      cout<<8<<" "<<6<<endl;
      cout<<7<<" "<<5<<endl;
      cout<<6<<" "<<4<<endl;
      cout<<5<<" "<<3<<endl;
      cout<<4<<" "<<2<<endl;
      cout<<3<<" "<<1<<endl;
      cout<<2<<" "<<2<<endl;
      cout<<1<<" "<<3<<endl;
      cout<<2<<" "<<4<<endl;
      cout<<3<<" "<<5<<endl;
      cout<<4<<" "<<6<<endl;
      cout<<5<<" "<<7<<endl;
      cout<<6<<" "<<8<<endl;
      cout<<5<<" "<<7<<endl;
      cout<<4<<" "<<8<<endl;
      cout<<3<<" "<<7<<endl;
      cout<<2<<" "<<6<<endl;
      cout<<1<<" "<<5<<endl;
       cout<<2<<" "<<4<<endl;
       cout<<3<<" "<<3<<endl;
       cout<<4<<" "<<2<<endl;
       cout<<5<<" "<<1<<endl;
       cout<<6<<" "<<2<<endl;
       cout<<7<<" "<<3<<endl;
       cout<<8<<" "<<4<<endl;
       cout<<7<<" "<<5<<endl;
       cout<<6<<" "<<6<<endl;
       cout<<5<<" "<<7<<endl;
       cout<<4<<" "<<8<<endl;
       cout<<3<<" "<<7<<endl;
       cout<<2<<" "<<8<<endl;
       cout<<1<<" "<<7<<endl;
       cout<<2<<" "<<6<<endl;
       cout<<3<<" "<<5<<endl;
       cout<<4<<" "<<4<<endl;
       cout<<5<<" "<<3<<endl;
       cout<<6<<" "<<2<<endl;
       cout<<7<<" "<<1<<endl;
       cout<<8<<" "<<2<<endl;
       cout<<7<<" "<<3<<endl;
       cout<<6<<" "<<4<<endl;
       cout<<5<<" "<<5<<endl;
       cout<<4<<" "<<6<<endl;
       cout<<3<<" "<<7<<endl;
       cout<<2<<" "<<8<<endl;


}
}
// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
//
// int32_t dow(int d, int m, int y)
// {
// 	static int a[] = { 0, 3, 2, 5, 0, 3,
// 					5, 1, 4, 6, 2, 4 };
// 	y -= m < 3;
// 	return ( y + y / 4 - y / 100 +
// 			y / 400 + a[m - 1] + d) % 7;
// }
// bool il(int y){
// 	  if((y%400==0)||(y%4==0 && y%100!=0))
// 		return true;
// 		return false;
// }
// int32_t main()
// {
//   int t;
//   cin>>t;
//   while(t--){
//     int m1,y1,m2,y2;
//     cin>>m1>>y1;
//     cin>>m2>>y2;
//     if(m2==1){
//       y2-=1;
//       m2==3;
//     }
//     if(m1<2)
//     m1+=1;
//     else if(m1>2)
//     {
//       m1=2;
//       y1+=1;
//     }
//     int c=0;
//     while(y1<=y2){
// 			l=il(y1);
// 			int temp=dow(1,m1,y1);
//       if(dow(1,m1,y1)==6 && il(y1)){
//         c+=1;
// 				y1=y1+5;
//       }
//       else if(dow(1,m1,y1)==6 && !il(y1)){
// 					c=c+1;
// 					y1=y1+1;
//
// 				// if(il(y1+1))
// 				// {
// 				// 	c+=2;
// 				// 	y1+=5;
// 				// }
// 				// else {
// 				// 	c+=2;
// 				// 	y1+=2;
// 				// }
//       }
// 			else if(dow(1,m1,y1)==0 && !il(y1)){
// 				c+=1;
// 				y1=y1+4;
// 			}
// 			else y1=y1+1;
//
//     }
//     cout<<c<<endl;
//   }
// return 0;
// }
