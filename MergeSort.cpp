#include <iostream>

using namespace std;

int main(){

  int arr[100];
  int size;
  cout << "Enter the array size " << endl;
  cin >> size;
  //First we will enter the Array
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " " << endl;
    }

    /*mergesort(a,l,r){
        if(l<r){
            int mid = (l+r)/2;
            mergesort(a,l,mid);
            mergesort(a,mid+1,r);
        }
        
    }*/

    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;


}