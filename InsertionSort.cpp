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


    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i -1;
        while(j >= 0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;


}
