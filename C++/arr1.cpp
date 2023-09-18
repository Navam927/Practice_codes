#include<iostream>
using namespace std;
#define size 40

int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    // for(int i = 0; i < m; i++) {
    //     for(int j = 0; j < n; j++){
    //         cout<<" "<< arr[i][j];
    //     }
    // }
    int srch;
    cout<<"Enter element you want to search: ";
    cin>>srch;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            if(arr[i][j] == srch){
                cout<<i<<" "<<j;
            }
            else {
                return -1;
            }
        }
    }
    return 0;
}