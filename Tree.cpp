#include <iostream>
using namespace std;
float COMPUTE_SMALLEST_H(float x){ //재귀로 구현한 계산 함수
    if((x - 34)>0 || (x-11)/2>0){
        x = (x-11)/2;
        COMPUTE_SMALLEST_H(x);}
    else
        cout <<"출력: "<< x<<endl;}
int main(){ //인풋을 위한 메인 함수
    float x;
    cout<<"입력: ";
    cin >>x;
    COMPUTE_SMALLEST_H(x);
    return 0;}