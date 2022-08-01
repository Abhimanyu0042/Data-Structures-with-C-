#include<iostream>
using namespace std;

int main(){
    int arr42[10];
    int b;
    int n = 10;
    for (int i=0; i<n; i++){
        cin>>arr42[i];
        //cout<< arr42[i]<<",";
        //cout<< &arr42[i]<<",";
        }
        for (int i = 0; i<n; i++){
        cout<<arr42[i]<<",";
        }
        cin>> b;
        bool Search;
        for (int i = 0; i<n; i++){
            if(arr42[i]==b){
                Search = true;
                cout <<"Number search is completed : "<<b<<endl;   
            }
        }
        if(Search==true){
            cout<<"Number is found"<<endl;
        }
        else{
            cout<<"Not found";
        }
        
}