#include<iostream>
using namespace std;
 
int deleteElement(int arr[], int n, int pos)
{
int i;
for (i=0; i<n; i++)
    if (arr[i] == pos)
        break;
 
if (i < n){
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}
return n;
}
 
int main(){
    int arr[] = {10, 1, 6, 2, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos = 6;
    n = deleteElement(arr, n, pos);
    cout<< "After Deletion the Array formed is :"<<endl;
    for (int i=0; i<n; i++)
    cout << arr[i] << " ";
 
    return 0;
}