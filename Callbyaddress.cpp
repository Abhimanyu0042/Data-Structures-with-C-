#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int C;
    C = *a;
    *a = *b;
    *b = C;
    return; 
}
int main(){
    int a,b;
    cin>>a>>b;
    cout <<"Before swap, value of a : "<<a<<endl;
    cout <<"Before swap, value of b : "<<b<<endl;

    swap(a,b);

    cout <<"After swap, value of a : "<<a<<endl;
    cout <<"After swap, value of b : "<<b<<endl;
}