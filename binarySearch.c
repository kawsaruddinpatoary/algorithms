#include<stdio.h>

int iterativeBinarySearch(int A[], int n, int key){
    int l = 0;
    int h = n-1;
    int mid = -1;
    while(l<=h){
        mid = (l+h)/2;
        if(A[mid]==key){
            return mid;
        }
        if(key<A[mid]){
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    int A[] = {10, 20, 30, 35, 40, 45, 60, 65, 70, 75, 80};
    int index = iterativeBinarySearch(A, 11, 10);
    index>=0 ? printf("Found at index %d.\n", index) : printf("Not found.\n");
    return 0;
}