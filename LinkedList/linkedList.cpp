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
    // //Static Allocation
    // Node n1(1);
    // Node *head = &n1; //Store address of first node in a pointer head
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);
    
    // n1.next = &n2;
    // n2.next =&n3;
    // n3.next = &n4;
    // n4.next= &n5;
    
    // print(head);

    // cout << n1.data << endl;;
    // cout << n2.data << endl;
    // cout << head -> data <<endl;
    
    // //Dynamic Allocation
    // Node* n3 = new Node(10);
    // Node* n4 = new Node(20);
    // Node* head= n3;
    // n3 ->next = n4;
    // cout << head->data << endl;

    return 0;

 }