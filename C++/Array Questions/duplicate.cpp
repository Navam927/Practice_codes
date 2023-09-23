#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    int unique_count = 0;
    int unique_elements[n];

    cout<<"Enter elements to array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        int isduplicate = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] == arr[i]){
                isduplicate = 1;
            }
        }
        if(!isduplicate){
            unique_elements[unique_count++] = arr[i];
        }
    }

    cout<<"Array with unique elements: ";
    for(int i = 0; i < unique_count; i++){
        cout<<unique_elements[i]<<" ";
    }
    return 0;
}