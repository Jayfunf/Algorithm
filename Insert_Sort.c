#include <stdio.h>
#include <stdlib.h>

#define MAX = 8;

void Insertion_sort_recursive(int *A,int a){
    if(a <=1 )return;
    Insertion_sort_recursive(A,a - 1);

    int key = A[a-1];
    int j = a-2;

    while(j >= 0 && A[j] > key){
        A[j+1] = A[j];
        j = j-1;
    }
    A[j+1] = key;
}

int main(){
    int arr[8] = {7,9,2,5,3,0,6,1};
    int a = sizeof(arr) / sizeof(arr[0]);
    printf("정렬 전\n");
    for(int i = 0; i<a;i++)
        printf("%d \n",arr[i]);
    Insertion_sort_recursive(arr,a);
    printf("정렬 후\n");
    for(int i = 0 ;i < a ; i++)
        printf("%d \n",arr[i] );
    return 0;
}