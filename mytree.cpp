#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
Node * newNode(int val){
    Node * temp=new Node;
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

void ino (Node * root){
    if(!root || root->data==-1)
    return ;
    ino(root->left);
    cout<<root->data<<" ";
    ino(root->right);
    return ;
}
int main()
{
    int n;
    cin>>n;
    queue<Node *> q;
    Node  * temp =newNode(1);
    int u,v;
    Node *root=temp;
    q.push(temp);
    while(!q.empty()){
         Node * te=q.front();
        q.pop();
        cin>>u>>v;
       Node* t1=newNode(u);
        Node * t2=newNode(v);
        te->left=t1;
        te->right=t2;
        if(u!=-1)
        q.push(t1);
        if(v!=-1)
        q.push(t2);

    }
ino(root);
}
