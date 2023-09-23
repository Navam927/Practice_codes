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

    cout<<"The elements of array are: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}