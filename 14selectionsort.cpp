// #include<iostream>
// using namespace std;

// int main(){
//    int n,i,j;
//     cout << "enter the size of the array" << endl;
//     cin>>n;
//     int arr[n];
//     cout << "enter the array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i]; 
//     }
//     for(i=0;i<=n-2;i++){
//         int min =i;
//         //har unsorted part me jo i index hoga vo minimum ya jo pehle index hoga in unsorted array 
//         for(j=i;j<=n-1;j++){
//      if(arr[j]<arr[min]);
//      min=j;
//      swap(arr[min],arr[i]);
//         }
//     }
//     cout << "sorted array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<< arr[i]; 
//     }


//     return 0;
// }


//or by function
#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    int i,j;
  for(i=0;i<=n-2;i++){
        int min =i;
        //har unsorted part me jo i index hoga vo minimum ya jo pehle index hoga in unsorted array 
        for(j=i;j<=n-1;j++){
     if(arr[j]<arr[min]);
     min=j;
     swap(arr[min],arr[i]);
        }
    }

}
int main(){
   int n;
    cout << "enter the size of the array" << endl;
    cin>>n;
    int arr[n];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }
  selectionsort(arr,n);
    cout << "sorted array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]; 
    }


    return 0;
}