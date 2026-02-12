#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int val;
  Node* right;
  Node* left;

  Node(int k){ val = k; left = right = nullptr; }
};

vector<vector<int>> bfs(Node* root){

  if(root == nullptr) return {};

  queue<Node*> q;

  vector<vector<int>> res;

  q.push(root);

  int curlvl = 0;


  while(!q.empty()){
    int len = q.size();
    res.push_back({});

    for(int i = 0; i<len; i++){

      Node* n = q.front();
      q.pop();

      res[curlvl].push_back(n->val);

      if(n->left != nullptr) q.push(n->left);
      if(n->right != nullptr) q.push(n->right);
    }
     curlvl++;
  }
  return res;
}



int main(){

    Node* root = new Node(5);
    root->left = new Node(12);
    root->right = new Node(13);

    root->left->left = new Node(7);
    root->left->right = new Node(14);

    root->right->right = new Node(2);

    root->left->left->left = new Node(17);
    root->left->left->right = new Node(23);

    root->left->right->left = new Node(27);
    root->left->right->right = new Node(3);

    root->right->right->left = new Node(8);
    root->right->right->right = new Node(11);

    vector<vector<int>> res = bfs(root);

    for(vector<int> level: res){
      for(auto x: level){
        cout<<x<<" ";
      }
      cout<<"\n";
    }

  return 0;
}
