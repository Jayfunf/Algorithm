#include <stdio.h>
#include <stdlib.h>

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
    printf("���� ��\n");
    for(int i = 0; i<a;i++)
        printf("%d \n",arr[i]);
    Insertion_sort_recursive(arr,a);
    printf("���� ��\n");
    for(int i = 0 ;i < a ; i++)
        printf("%d \n",arr[i] );
    return 0;
}


[PseudoCode]
Insertion_sort_recursive(A,a)
    if a <= 1
        return
    Insertion_sort_recursive(A, a-1)
    key <- A[a-1]
    j <- a - 2

    while j >= 0 and A[j] > key
        do A[j+1] <- A[i]
           j <- j - 1
    A[j + 1] = key
    