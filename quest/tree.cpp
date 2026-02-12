#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int val;
    Node* right;
    Node* left;

    Node(int key){
      val = key;
      left = right = nullptr;
      cout<<"Created node: "<<key<<"\n";
    }

  public:
    Node* createBinTree(int data, int ldata, int rdata){
      Node* root = new Node(data);
      left = new Node(ldata);
      right = new Node(rdata);

      return root;
    }

};

int main(){

  struct Node* root = new Node(1);
  root -> left = new Node(2);
  root -> right  = new Node(3);
  root -> right -> right = new Node(4);

}
