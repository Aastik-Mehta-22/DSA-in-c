#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1;i++){
        for(int j =0; i<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

// void print(int arr[], int n ){
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }



int main(){
    int arr[] = {2,3,5,65,7,89,100};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr,n);
    // print(arr,n);

}