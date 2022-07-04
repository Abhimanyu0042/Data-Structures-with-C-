#include <iostream>
using namespace std;

int factorial(int n){
    int i = 1;
    int fact_n = 1;
    while(i<=n){
        fact_n = fact_n * i;
        i++; 
    }
    return fact_n;
}

int main(){
    int n;
    int i = 1;
    cout<<"Enter the No. to find the factorial- "<<endl;
    cin >> n; 
    if (i<n){
    cout << factorial(n);
    }
    else {
        cout<<"Answer is not available.";
    }
}