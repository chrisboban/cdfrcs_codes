#include <iostream>
using namespace std;

int insertionSort(int a[], int l){

    for(int i = 0; i < l-1; i++){
        for(int j = i+1; j > 0; j--){
            if(a[j] < a[j-1]){
                int temp = a[j];
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        } 
    }

    return  0;
}

int main(){

    int arr[] = {9,3,0,5,7,1};
    insertionSort(arr, 6);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << endl;
    }

    return 0;
}