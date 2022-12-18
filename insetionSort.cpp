#include<iostream>
using namespace std;

int key;
int j;
int n = 5;

void insertion_sort(int arr[]){
    for(int i = 1; i<n; i++){
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        if(j != i-1){
            arr[j+1] = key;
        }
    }

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;
}

int main(){

    int arr[5] = {99, 11, 77, 22, 88};
    insertion_sort(arr);

    int b[5] = {9, 7, 3, 6, 2};
    insertion_sort(b);

    int c[5] = {245, 15, 450, 1, 5};
    insertion_sort(c);
    return 0;
}