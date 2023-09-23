// Question - Enter size of the matrix and fill the matrix then calculate the sum of /diagonal and rightmost cilumn using 2d array

#include<iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter n and m: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    // Sum of rightmost elements
    int rght_sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(j==m-1){
                rght_sum += arr[i][j];
            }
        }
    }
    cout<<"Right most sum is: "<<rght_sum<<endl;
    
    // Sum of / diagonal
    int left_diagonal_sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i + j == m-1){
                left_diagonal_sum += arr[i][j];
            }
        }
    }
    cout<<"Left diagonal sum is: "<<left_diagonal_sum;
    return 0;

}