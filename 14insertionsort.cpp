#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
       int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        //j not equal to 0 because it will be -1
        {

            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr, n);
    cout << "sorted array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}

