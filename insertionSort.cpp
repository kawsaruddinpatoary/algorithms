#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr, int n){
    for(int i=1; i<n; i++){
        int j = i-1;
        int x = arr[i];
        while(j>=0 && x<arr[j]){
            swap(arr[j+1], arr[j]);
            j--;
        }
        arr[j+1] = x;
    }
}

int main(){
    vector<int> arr = {21, 13, 65, 34, 45, 98, 56};
    insertionSort(arr, 7);
    for(int val: arr){
        cout << val << " ";
    }
    cout << endl;
}