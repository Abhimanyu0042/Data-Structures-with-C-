#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
    return; 
}
int main(){
    int x,y;
    cin>>x>>y;
    cout <<"Before swap, x : "<<x<<endl;
    cout <<"Before swap, y : "<<y<<endl;

    swap(&x,&y);

    cout <<"After swap, x : "<<x<<endl;
    cout <<"After swap, y : "<<y<<endl;
}