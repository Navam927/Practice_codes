#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array is: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}