#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int l, int h){
    int pivot = arr[l];
    int i=l;
    int j=h;
    do{
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }while(i<j);
    swap(arr[l], arr[j]);
    return j;
}

void quickSort(vector<int>& arr, int l, int h){
    int j;
    if(l<h){
        j = partition(arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j+1, h);
    }   
}

int main(){
    vector<int> arr = {12, 8, 4, 6, 5, 3, 9, 13, 1, 10, INT_MAX};
    quickSort(arr, 0, 10);
    for(int i=0; i<arr.size()-1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}