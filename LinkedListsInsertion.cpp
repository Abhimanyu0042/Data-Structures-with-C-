#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *next;
Node(int data){
    this->data = data;
    this->next = NULL;
}
};

//Insert Node at Head
void Insertathead(Node *&head,Node* &tail, int d){
    if (head == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
    }
}

//Insert at tail
void Insertattail(Node *&head,Node *&tail,int d){
    if (tail == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    }
}

void printList(Node *&head)
{
    Node *temp = head; 

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout<<"List before Insertion : ";
    printList(head);

    Insertathead(head,tail,3);
    cout<<"After Insertion at head : ";
    printList(head);
    cout<<"After Insertion at tail : ";
    Insertattail(head,tail,5);
    printList(head);
}