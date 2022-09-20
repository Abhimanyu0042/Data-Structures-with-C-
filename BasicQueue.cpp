//Queues using Arrays

#include <iostream>
using namespace std;

class Queue{
    int size;
    int *arr;
    int qfront;
    int rear;
    public:
    Queue(int size){
        arr = new int[size];
        qfront = -1;
        rear = -1;
    }
    bool IsEmpty(){
        if(qfront = rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int n)
    {
        if(rear == size-1){
            cout<<"Queue is overflowed. "<<endl;
        }
        else if(rear == -1 && qfront == -1){
            qfront = rear = 0;
            arr[rear] = n;
        }
        else{
            rear++;
            arr[rear] = n;
        }
    }
    void dequeue()
    {
        if( qfront == -1 && rear == -1){
            cout<<"Queue is underflow. ";
        }
        else if(qfront == rear)
        {
            int qfront = rear = -1;
            cout<<"it will be a empty queue."<<endl;
        }
        else{
            ++qfront;
        }
    }
    void display(){
        if(qfront == rear == -1){
            cout<<"Queue is empty. ";
        }
        else{
            for(int i = qfront; i<=rear;i++){
                    cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
    void peek(){
        cout<<arr[qfront]<<" "<<endl;
    }
};

int main(){
    Queue q(6);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.display();
    q.dequeue();
    q.display();
    cout<<"Code went well till now. "<<endl;


    // q.enqueue(10);
    // q.enqueue(20);
    // q.enqueue(30);
    // q.enqueue(40);
    // q.display();
    // q.peek();
    // cout<<"Code went well till now. "<<endl;

    // q.dequeue();
    // q.display();
    // cout<<"Code went well till now. "<<endl;

    // q.dequeue();
    // q.display();
    // cout<<"Code went well till now. "<<endl;

    // q.dequeue();
    // q.display();
    // cout<<"Code went well till now. "<<endl;

}

