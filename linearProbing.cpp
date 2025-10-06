#include<bits/stdc++.h>
using namespace std;

#define SIZE 10

int Hash(int key){
    return key%SIZE;
}

void insert(vector<int>& H, int key){
    int index = Hash(key);
    if(H[index]==0){
        H[index] = key;
    }else{
        int i=index+1;
        while(H[i%SIZE]!=0){
            i++;
        }
        H[i%SIZE] = key;
    }
}

int Search(vector<int> H, int key){
    int index = Hash(key);
    int i=index;
    while(H[i%SIZE]!=0){
        if(H[i%SIZE]==key) return i%SIZE;
        i++;
    }
    return -1;
}

int main(){
    vector<int> HT(SIZE, 0);
    insert(HT, 22);
    insert(HT, 32);
    insert(HT, 100);
    insert(HT, 30);
    insert(HT, 56);
    insert(HT, 6);
    insert(HT, 27);
    insert(HT, 29);
    insert(HT, 19);

    for(int i : HT){
        cout << i << " ";
    }
    cout << endl;

    int place = Search(HT, 33);
    cout << place << endl;
}