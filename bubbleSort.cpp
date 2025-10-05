#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr, int n){
    int flag;
    for(int i=0; i<n-1; i++){
        flag=0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag=1;
            }
        }
        if(flag==0) break;
    }
}

int main(){
    vector<int> arr = {23, 87, 10, 45, 78, 12, 34};
    bubbleSort(arr, 7);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
}