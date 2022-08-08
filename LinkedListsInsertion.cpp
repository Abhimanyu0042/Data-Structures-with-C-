#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

void insertafter(Node* prev_node, int new_data){
    if(prev_node = NULL){
        cout<<"Node cannot be NULL";
        return;
    }
    cout<<"Enter the value you want to Enter : ";
    cin>>new_data;
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}


int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
    Node* fourth = NULL;
    Node* fifth = NULL;


	head = new Node();
	second = new Node();
	third = new Node();
    fourth = new Node();
    fifth = new Node();

	head->data = 1; 
	head->next = second; 

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = fourth;

    fourth->data = 4; 
	fourth->next = fifth; 

    fifth->data = 5; 
	fifth->next = NULL; 

    cout<<"List before insertion : ";
    printList(head);
    
    insertafter(second,8);

    cout<<"List after insertion :";
    printList(head);
	return 0;
}

