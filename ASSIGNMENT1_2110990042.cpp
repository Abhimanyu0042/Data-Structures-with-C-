#include <iostream>
using namespace std;

int num = 150;

int localvariable()
{

    int num = 250;
    return num;
}

int main()
{

    cout << " the local variable is going to be - " << localvariable() << endl;
    cout << "the global variable is going to be - " << ::num;
    return 0;
}