// Array rotation 
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Rotated array is\n ";
    for(int i = 0; i < n; i++){
        for(int j = n-1; j > 0; j--){
            cout<<arr[j][i]<<" ";
        }
    }
    return 0;
}