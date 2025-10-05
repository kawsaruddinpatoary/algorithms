#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n){
    int i,j,k;
    for(i=0; i<n-1; i++){
        j=k=i;
        while(j<n){
            if(arr[k]>arr[j]){
                k=j;
            }
            j++;
        }
        swap(arr[i], arr[k]);
    }
}

int main(){
    vector<int> arr = {10, 9, 13, 8, 3, 5, 11, 6, 7, 2};
    selectionSort(arr, 10);
    for(int val: arr){
        cout << val << " ";
    }
    cout << endl;
}