#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* right;
  Node* left;

  Node(int val){ data = val; left  = right = nullptr; }

};

void inorder(Node* root, vector<int> &arr){
  if(root == nullptr) return;
  inorder(root->left, arr);
  arr.push_back(root->data);
  inorder(root->right, arr);
}

vector<int> traverse(Node* root){

  vector<int> arr;

  inorder(root, arr);

  return arr;

}

int main(){

  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);

  vector<int> ar = traverse(root);

  for(auto x: ar){
    cout<<x<<" ";
  }

  return 0;

}
