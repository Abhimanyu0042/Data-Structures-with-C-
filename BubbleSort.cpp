#include <iostream>
using namespace std;

int main()
{
  int arr[100];
  int size;
  cout << "Enter the array size " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " " << endl;
    }
    for(int i = 0; i<size-1;i++){
        bool swapped = false;
        for(int j = 0;j<size-i-1;j++){
            if(arr[j+1]<arr[j]){
                swapped = true;
                int temp;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]=temp;
            }
        }
        if (!swapped){
            break;
        }
    }
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;


}
