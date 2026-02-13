#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int val;
  Node* left;
  Node* right;

  Node(int k, Node* l = nullptr, Node* r = nullptr){
    val = k;
    left = l;
    right = r;
  }
};

Node* makeTree(vector<int> &ar){
  if(ar.empty() || ar[0] == -1) return nullptr;

  Node* root =  new Node(ar[0]);
  queue<Node*> q;
  q.push(root);

  int i = 1;

  while(!q.empty() && i<ar.size()){
    Node* cur = q.front();
    q.pop();

    if(ar[i] != -1){
      cur->left = new Node(ar[i]);
      q.push(cur->left);
    }
    i++;

    if(ar[i] != -1 && i<ar.size()){
      cur->right = new Node(ar[i]);
      q.push(cur->right);
    }
    i++;

  }

return root;

}

int main(){

int n;
cin>>n;

vector<int> arr(n);
for(auto &x: arr){
  cin>>x;
}

Node* t = makeTree(arr);

cout<<t->val<<" "<<t->left->val<<" "<<t->right->val;



return 0;
}
