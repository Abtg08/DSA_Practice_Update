#include<iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput(){
    int data;
    cout<< "Enter the data" <<endl;
    cin>>data;
    Node* head= NULL;
    Node* tail= NULL;
    while(data != -1){
        Node* newNode =new Node(data);
        if(head== NULL){
            head = newNode;
            tail= newNode;
        }
        else{
            tail-> next = newNode;
            tail= newNode;
            //OR tail = tail->next;
        } 
        cin>> data;
    }
    cout<< " "<< endl;
    cout<< "Your LL is:" <<endl;
    return head;
}

Node* insertNode( Node* head, int i, int data)
{
    Node* newNode = new Node(data);
    int count= 0;
    Node* temp = head;
    if(i==0){
        newNode -> next = head;
        head= newNode;      
        return head;
    }
    while(count < i-1){
        temp = temp->next;
        count++;
    }
    /*
    Node* a= temp->next;             //USing temporary variable a
    temp-> next = newNode;
    newNode -> next = a;
    */
   if(temp != NULL){
    newNode->next= temp->next;
    temp->next = newNode;
   }
   return head;
}

Node* recInsertNode(Node* head, int i, int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        return 0;
    }
    else{
        head= head->next;
        data-> data;
    }
}

void print(Node* head){
    Node* temp = head;
    cout<< temp->data <<endl;
    if (temp->next!= NULL)
        {
            print(temp->next);
        }
}

int main()
{
    Node* head = takeInput();
    print(head);
    int i, data;
    cout<< "Enter your position and node" <<endl;
    cin>> i>> data;
    head= insertNode(head, i , data);
    print(head);
    return 0;
}