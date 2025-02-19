#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{  
    if(n==1){
        //if one eleemnt remains then stop
        return;
    }
   for(int i=0;i<=n-2;i++){
    //we do no0t go till last because last eklement ko kisse compare krenge
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
   }
   bubblesort(arr,n-1);
   //removing the last sorted element
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
    bubblesort(arr, n);
    cout << "sorted array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}