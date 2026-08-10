
//          Doubly Linked List


#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node * prev;

    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class DoublyList{
 
 Node * head;
 Node * tail;

 public:
 DoublyList(){
 head=tail=NULL;
 }

 void push_front(int val){
    Node * newNode = new Node(val);
    if(head==NULL){
        head=tail=newNode;
        return;
    } else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
 }

 void push_back(int val){
    Node * newNode = new Node(val);
    if(head==NULL){
        head=tail=newNode;
        return;
    } else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
 }

 void pop_front(){
    if(head==NULL){
        cout<<"DLL is empty"<<endl;
        return;
    }

    Node *temp=head;
    head=head->next;
    if(head!=NULL){
    temp->prev=NULL;
    }
    temp->next=NULL;
    delete temp;

 }

 void pop_back(){
    if(tail==NULL){
        cout<<"DLL is empty"<<endl;
        return;
    }

    Node *temp=tail;
    tail=tail->prev;

   if(tail==NULL){
        head=NULL;
    } else {
        tail->next=NULL;
    }
    delete temp;
 }


 void printLL(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" <=> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
 }
};
int main(){

DoublyList dll;

dll.push_back(1);
dll.push_back(2);
dll.push_back(3);
dll.push_back(4);
dll.pop_back();
dll.printLL();

}


