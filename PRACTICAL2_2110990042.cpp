#include <iostream>
using namespace std;

int Interest(int p, int t){
    int SI;
    int r;
    char G; 
    cin >> G;
    if(G == 'M'){
        r = 10;
    }
    else if(G == 'F'){
        r = 20;
    }
    t = t/365;
    SI = (p*r*t)/100;
    return SI;
}
int main(){
    int p,t;
    cout << "Enter the principle and time : "<< endl;
    cin >> p>>t;
    cout << "Simple Interest : "<< Interest(p,t)<<endl;
}