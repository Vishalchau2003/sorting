#include <iostream>
using namespace std;

void insertionsort(int arr[], int n,int m)
 ///we reached last index as m==n
 //m is the index vaalli element jisko hum correct position me rakhenge
 //and each time increase the value of m sp we can move the next element to its correct position
{  if(m==n){
    return;
}
   int j=m;
   while(j>0&&arr[j-1]>arr[j]){
    swap(arr[j],arr[j-1]);
    j--;
   } 
   insertionsort(arr,n,m+1);
   
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
    insertionsort(arr, n,1);
    cout << "sorted array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}