#include <bits/stdc++.h>
using namespace std;

int main() {
	    int n;
	    cin>>n;
	    priority_queue<int> mxheap;
	    priority_queue<int , vector <int>, greater<int> > miheap;
	    double median =0;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        if(temp>median)
	        miheap.push(temp);
	        else mxheap.push(temp);
	        if(miheap.size()>mxheap.size()+1)
	        {
	            mxheap.push(miheap.top());
	            miheap.pop();
	        }
	        else if(mxheap.size()>miheap.size()+1)
	        {
	            miheap.push(mxheap.top());
	            mxheap.pop();

	        }
	        if(mxheap.size()==miheap.size()){
	       median =(mxheap.top()+miheap.top())/2;
	        cout<<(mxheap.top()+miheap.top())/2<<endl;
	         }
	        else if(mxheap.size()>miheap.size()){
	            median =mxheap.top();
	            cout<<median<<endl;
	        }
	        else {
	            median =miheap.top();
	            cout<<median<<endl;
	        }
	        }

	return 0;
}
