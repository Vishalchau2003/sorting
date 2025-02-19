#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>&arr, int low, int high)
{
    
        int pivot = arr[low];
        int i = low+1;
        int j = high;

        while (i<j)
        {
            while (arr[i] <= pivot && i <= high - 1)
            {
                i++;
            }
            while (arr[j] > pivot && j >= low + 1)
            {
                j--;
            }
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low],arr[j]);
        return j;
    }


void quicksort(vector<int>&arr,int low,int high){
   if (low < high)
   //suppose divide krte gye and at a point just ek element bacha hai
   //so single element is always sorted and theree low=high so we wont apply quicksort 
    {    
        int partitionindex=partition(arr,low,high);
         quicksort(arr,low,partitionindex-1);
         quicksort(arr,partitionindex+1,high);
    }
}

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr, 0, n - 1);
    
    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;

  

    return 0;
}