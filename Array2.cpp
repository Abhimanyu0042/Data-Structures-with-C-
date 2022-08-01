#include<iostream>
using namespace std;

int main(){
    int arr42[6];
    int a,i;
    for (int i=0; i<5; i++)
        cin>>arr42[i];
        cout<<"Enter element to the array"<<endl;
        cin>>a;
        arr42[i]=a;
        cout <<"New array is : "<<endl;
        for (int i = 0; i<6; i++){
        cout<<arr42[i]<<","<<endl;
        return 0;}        
}