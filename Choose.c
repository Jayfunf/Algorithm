#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("당신의 -공평-한 선택을 도와주는 프로그램\n");
    int a = time(NULL)%2;
    printf("%d",a);
    if(a == 1){
        printf("겜해!\n");
    }
    if(a == 0){
        printf("겜해!\n");
        //printf("공부해!\n");
    }
    return 0;
}