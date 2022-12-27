#include <iostream>
using namespace std;

int selectionSort(int a[], int l);
int maxnum(int arr[], int l, int k); 

int selectionSort(int a[], int l){

    for(int i = 0; i < l; i++){
        cout << a[maxnum(a, l, i)] << endl << endl;
        int temp = a[maxnum(a, l, i)];
        a[maxnum(a, l, i)] = a[l-i-1];
        a[l-i-1] = temp;
    }

    return 0;
}

int maxnum(int a[], int l, int k){

    int num = a[0];
    int index = 0;
    for(int i = 1; i < l - k; i++){
        if(a[i] > num){
            num = a[i];
            index = i;
        }
    }

    return index;
}

int main(){

    int arr[] = {2,0,5,0,1};
    selectionSort(arr, 5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    return 0;
}