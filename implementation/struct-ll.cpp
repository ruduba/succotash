#include<bits/stdc++.h>
using namespace std;

 struct node{
    int value;
    struct node* next;
};

node* head  =  NULL;

void insert(int new_value){
    node* new_node = new node();
    new_node->value = new_value;
    new_node->next = head;
    head = new_node;
}

void display(){
    node* ptr =  head;
    while(ptr != NULL){
        cout<< ptr->value <<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}

int main(){
    
    for(int i = 0; i<10; i++){
        int tmp;
        cin>>tmp;
        insert(tmp);
    }
    
    display();

    return 0;
    }