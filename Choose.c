#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("����� -����-�� ������ �����ִ� ���α׷�\n");
    int a = time(NULL)%2;
    printf("%d",a);
    if(a == 1){
        printf("����!\n");
    }
    if(a == 0){
        printf("����!\n");
        //printf("������!\n");
    }
    return 0;
}