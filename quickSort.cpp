#include <iostream>
using namespace std;

void quicksort(int a[], int l, int h);
int partition(int a[], int l, int h);

int partition(int a[], int l, int h){
    int pivot = a[h];
    int i = l-1;
    for(int j = l; j < h; j++){
        if(a[j] <= pivot){
            i++;
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            // swap(a[j], a[i]);      }
    }
    
    }
    int temp = a[i+1];
    a[i+1] = a[h];
    a[h] = temp;

    return (i+1);
}
void quicksort(int a[], int l, int h){
    if(l < h){
        int r = partition(a, l, h);
        quicksort(a, l, r-1);
        quicksort(a, r+1, h);
    }
}

int main(){


    int arr[] = {30, 9, 0, 8, 2};
    quicksort(arr, 0, 4);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }

    return 0;
}


pivot = arr[h];
i = l-1;
for(int j = l; j < h; j++){
    if(arr[j] < pivot)[
        i++;
        swap arr[i], arr[j];
    ]

    
}