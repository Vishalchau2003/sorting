#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didswap=0;
        //if array is sorted then we do not need any swaps so we will 
        //confirm that by just running our first inner looop if no swaps thrn break

        for (int j = 0; j <= i - 1; j++)
        {
            // j=0 to n-1
            // j=0 to n-2
            //.       .
            //.       .
            //.       .
            // j=0 to 1
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didswap=1;

            }
        }
        if(didswap==0){
            break;
        }
        cout<<"runs"<<endl;
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
    bubblesort(arr, n);
    cout << "sorted array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}



// #include<iostream>
// using namespace std;

// void bubblesort(int arr[],int n){
//     for(int i=0;i<=n-1;i++){
//        for(int j=0;j<=n-i-1;j++){
// if (arr[j]>arr[j+1])
// {
//     int temp=arr[j];
//     arr[j]=arr[j+1];
//     arr[j+1]=temp;
// }
//   }
// }
// }

// int main(){
//   int n;
//     cout << "enter the size of the array" << endl;
//     cin>>n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i <n; i++)
//     {
//         cin >> arr[i];
//     }
// bubblesort(arr,n);
//      cout << "sorted array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<< arr[i];
//     }

//     return 0;

// }