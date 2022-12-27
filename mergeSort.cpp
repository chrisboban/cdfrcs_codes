#include <iostream>
using namespace std;

int mergeSort(int a[], int s, int l);
int[] merge(int a[], int s, int e, int m);
int mergeSort(int a[], int s, int l){
    int mid = (l - s - 1)/2;
    mergeSort(a, s, mid);
    mergeSort(a, mid, l);

    merge(a, s, l ,mid);

    return 0;
}

int[] merge(int a[], int s, int e, int m){
    int i = s;
    int j = m;
    int k = 0;
    int mix[e-s];
while((i < m) && (j < e)){
    if(a[i] < a[j]){
        mix[k] = a[i];
    i++;
    k++;
    }
        else{
            mix[k] = a[j];
            j++;
            k++;
        }
}

    while(i < m){
        mix[k] = a[i];
        i++;
        k++;
    }

    while(j<e){
        mix[k] = a[j];
        j++;
        k++;
    }

    return mix[];
 }

int main(){

int arr[] = {2,5,1,0,7};
mergeSort(arr, 0, 5);
for(int i = 0; i < 5; i++){
    cout << arr[i] << endl;
}

    return 0;
}