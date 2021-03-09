#include <stdio.h>
#include <stdlib.h>

static int* buff;

void merge(int* arr, int L, int R){

    if(L<R){
        int C = (L+R)/2;

        merge(arr,L,C);
        merge(arr,C+1,R);

        int bf_idx = 0;
		int i;
		int j = 0;
		int k = L;

        for (i = L;i<=C;i++)
            buff[bf_idx++] = arr[i];
        

        while(i <= R && j<bf_idx){
            if(buff[j] <= arr[i])
                arr[k++] = buff[j++];
            else
                arr[k++] = arr[i++];
        }

        while(j<bf_idx)
            arr[k++] = buff[j++];
    }
}

int main(){
    int arr[8]= {7,6,2,3,8,9,11,4};
    int arr_cnt = 8;

    buff = (int*)calloc(8, sizeof(int));

    merge(arr, 0, arr_cnt -1);

    for(int i = 0;i<8;i++){
        printf("  %d",arr[i]);
    }
    return 0;
}