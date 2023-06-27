#include<iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput(){
    int data;
    cout<<"Enter the data" << endl;
    cin>>data;
    Node* head= NULL;
    Node* tail = NULL;
    while(data != -1){
        Node* newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next = newNode;
            tail= tail->next;
        }
        cin >> data;
    }
    cout<< " "<< endl;
    cout<< "Your LL is:" <<endl;
    return head;
}

Node* deleteNode(Node* head, int i){
    Node* temp= head;
    int count=0;
    while(count < i)
    {
        temp= temp->next;
        count++;
        if(count < i && count+1 == i)
        {
            Node*a = temp->next;
            Node*b = a->next;
            temp -> next = b ;
            delete a;
        }
    }
    return head;
}

void print(Node* head){
    Node* temp= head;
    cout<< temp->data<<endl;
    if(temp->next != NULL){
        print(temp->next);
    }
}

int main(){
    Node* head = takeInput();
    print(head);
    int i, data;
    cout<< "Enter your position to delete" <<endl;
    cin>> i;
    head= deleteNode(head, i);
    print(head);
    return 0;
}