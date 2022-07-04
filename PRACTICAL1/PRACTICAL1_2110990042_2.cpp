//WAP a program to find area and perimeter of the rectangle 

#include <iostream>
using namespace std;

int main() {
    int l, b, A, P;
    cout << "Enter the length and breadth :-";
    cin>>l>>b ;
    A = l*b;
    P = 2*(l+b);
    cout << "area of the rectangle = " << A <<  " Perimeter of the Rectangle = "<<P ;
    return 0;
}