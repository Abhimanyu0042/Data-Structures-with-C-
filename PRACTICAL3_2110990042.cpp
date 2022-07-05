#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
    return; 
}
int add(int &x, int &y){
    int sum;
    sum = x + y;
    cout << "The Sum of the "<< x <<"&"<< y <<" = "<<sum<<endl;
}

int diff(int x, int y){
    int D;
    D = x - y;
    cout<<"The Difference is equal to = "<<D;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout <<"Before swap, x : "<<x<<endl;
    cout <<"Before swap, y : "<<y<<endl;

    swap(&x,&y);

    cout <<"After swap, x : "<<x<<endl;
    cout <<"After swap, y : "<<y<<endl;

    add(x,y);
    diff(x,y);
}