#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int val;
  Node* right;
  Node* left;

  Node(int k){ val = k, left = right = nullptr; }

};

void bfs(Node* root, int lvl, vector<vector<int>> &res){
  if(root == nullptr) return;

  if(res.size() <= lvl){
    res.push_back({});
  }

  res[lvl].push_back(root->val);

  bfs(root->left, lvl+1, res);
  bfs(root->right, lvl+1, res);
}

vector<vector<int>> traverse(Node* root){
    vector<vector<int>> res;

    bfs(root, 0, res);

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

    vector<vector<int>> res = traverse(root);

    for(vector<int> level: res){
      for(auto x: level){
        cout<<x<<" ";
      }
      cout<<"\n";
    }

    return 0;
}
