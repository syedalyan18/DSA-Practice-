

//          Circular Linked List


#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class CircularList{
 
 Node * head;
 Node * tail;

 public:
 CircularList(){
 head=NULL;
 }

 void insert_at_head(int val){
    Node * newNode = new Node(val);
    if(head==NULL){
        head=tail=newNode;
        tail->next=head;
        return;
    } else{
        newNode->next=head;
        head=newNode;
        tail->next=head;
    }
 }

  void insert_at_tail(int val){
    Node * newNode = new Node(val);
    if(head==NULL){
        head=tail=newNode;
        tail->next=head;
        return;
    } else{
        tail->next=newNode;
        tail=newNode;
        tail->next=head;
    }
 }

 void remove_from_front(){
    if(head==NULL){
        cout<<"CLL is empty"<<endl;
        return;
    }

    if(head==tail){
        delete head;
        head=tail=NULL;
    }

    Node *temp=head;
    head=head->next;
    temp->next=NULL;
    tail->next=head;
    delete temp;
 }

void remove_from_back(){
    if(head==NULL){
        cout<<"CLL is empty"<<endl;
        return;
    }

    if(head==tail){
        delete head;
        head=tail=NULL;
    }

    Node *temp=tail;
    Node *prev=head;
    while(prev->next!=tail){
        prev=prev->next;
    }
        tail=prev;
        tail->next=head;
        temp->next=NULL;
        delete temp;
 }


 void printLL(){
    cout<<head->data<<" -> ";
    Node* temp=head->next;
    while(temp!=head){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
 }
};
int main(){

CircularList cll;

cll.insert_at_head(1);
cll.insert_at_head(2);
cll.insert_at_head(3);
cll.insert_at_tail(0);
cll.remove_from_front();
cll.printLL();
cll.remove_from_back();
cll.printLL();

}
