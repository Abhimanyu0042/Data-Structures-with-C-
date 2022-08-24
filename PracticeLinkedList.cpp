#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

//Constructor to initialize data and address as NULL
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
//Destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void InsertatHead(Node* &head, int d){
    //create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp; 
}

void InsertatTail(Node* &tail, int d){
    //create new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void InsertatPosition(Node* &head,Node* &tail,int position, int d){
    
    //insert at start
    if(position == 1){
        InsertatHead(head,d);
        return;
    }

    //insert at middle
    Node* temp = head;
    int cnt = 1;

    while(cnt< position - 1){
        temp = temp -> next;
        cnt++;
    }

    //Insert at end/tail
    if(temp->next == NULL){
        InsertatTail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void ToDeleteNode(Node* &head, int position){
    if(position == 1){
        Node* temp =  head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }   
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<""<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    //cout<<node1 -> data << endl;
    //cout<<node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertatTail(tail, 15);
    print(head);

    InsertatHead(head, 12);
    print(head);

    InsertatPosition(head,tail,2,22);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    ToDeleteNode(head,3);
    print(head);
}