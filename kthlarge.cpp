#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
        int n,k;
        cin>>k>>n;
        int temp;
        priority_queue<int , vector<int>,greater <int> > q;
        for(int i=0;i<n;i++){
        cin>>temp;
        if(q.size()<k){
            q.push(temp);
            if(q.size()<k)
            cout<<-1<<" ";
            else cout<<q.top()<<" ";
        }
        else{
            if(temp>q.top()){
                q.pop();
                q.push(temp);
                cout<<q.top()<<" ";
            }
            else cout<<q.top()<<" ";
        }

        }

	cout<<endl;
	}
	return 0;
}
