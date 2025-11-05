#include<iostream>
using namespace std;
int binarySearchRecursive(int arr[],int low,int high,int x){
    if(low>high)
    return -1;
    int mid =low + (high-low)/2;
    if(arr[mid]==x)
    return mid;
    else if (arr[mid]>x)
    return binarySearchRecursive(arr,low,mid-1,x);
    else
    return binarySearchRecursive(arr,mid+1,high,x);
}
 int main() {
     int n, x;
 
      
     cout << "Enter number of elements: ";
     cin >> n;
 
     int arr[n];
 
     
     cout << "Enter " << n << " sorted elements: ";
     for (int i = 0; i < n; i++) {
         cin >> arr[i];
     }
 cout << "Enter element to search: ";
    cin >> x;

   
    int result = binarySearchRecursive(arr, 0, n - 1, x);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}