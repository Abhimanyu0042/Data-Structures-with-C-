//Queue using LL

#include<iostream>
using namespace std;

class Queue{
    public:
    int data;
    Queue *next, *front, *rear;

    Queue(int data){
        this -> data = data;
        this -> next = NULL;
        front = NULL;
        rear = NULL;
    }

void enqueue(int data){
    Queue* temp = new Queue(data);
    if(front == NULL && rear == NULL){
        front = rear = temp;
    }
    else{
        rear -> next = temp;
        rear = temp; 
    }
}

void dequeue(){
    Queue* temp = new Queue(data);
    if(front == NULL && rear == NULL){
        cout<<"Queue is already empty. ";
    }
    else if(front != NULL){
        temp = front;
        front = front -> next;
        free(temp);
    }
    else{
        temp = front;
        free(temp);
    }
}

void peek(){
    cout<<front -> data;
}

void display(){
    Queue* temp = new Queue(data);
    temp = front;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.display();
    
}
