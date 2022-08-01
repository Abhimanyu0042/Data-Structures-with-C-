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


    for(int i = 0;i<size - 1;i++){
        int min = i;
        for(int j = i +1;j<size;j++){
            if(arr[j] = arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp;
            temp = arr[i];
            arr[i] = arr[min];
            arr[min]=temp;
        }
    }
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;


}
