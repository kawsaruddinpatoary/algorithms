#include<bits/stdc++.h>
using namespace std;

void countSort(vector<int>&A){
    int max = *(max_element(A.begin(), A.end()));
    vector<int> count(max+1, 0);

    for(int i=0; i<A.size(); i++){
        count[A[i]]++;
    }
    int i=0;
    A.clear();
    while(i<max+1){
        while(count[i]>0){
            A.push_back(i);
            count[i]--;
        }
        i++;
    }
}

int main(){
    vector<int> arr = {12, 24, 4, 6, 5, 3, 9, 100, 1, 10};
    countSort(arr);
    for(int val: arr){
        cout << val << " ";
    }
    cout << endl;
}