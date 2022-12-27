#include <iostream>
using namespace std;

int bubbleSort(int a[], int l){
    
    for(int i = 0; i < l; i++){
        for(int j = 1; j < l-i; j++){
            if(a[j] < a[j-1]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }

    return 0;
}

int main(){

    int arr[] = {4,1,3,0,2};
    bubbleSort(arr, 5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    return 0;
}