#include<stdio.h>

int iterativeMergeSort(int A[], int B[], int C[], int m, int n){
    int i,j,k;
    i=j=k=0;

    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k++] = A[i++];
        }else{
            C[k++] = B[j++];
        }
    }
    for(;i<m; i++){
        C[k++] = A[i];
    }
    for(;j<n; j++){
        C[k++] = B[j];
    }
}

int main(){
    int A[] = {10, 20, 30, 40, 50};
    int B[] = {5, 15, 25, 35, 45};

    int C[10]; 
    iterativeMergeSort(A, B, C, 5, 5);
    for(int i=0; i<10; i++){
        printf("%d ", C[i]);
    }
}