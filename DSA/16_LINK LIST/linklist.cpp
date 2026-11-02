#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);

    a->next=b;
    b->next=c;

    Node* temp=a;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}