#include <iostream>
using namespace std;
float COMPUTE_SMALLEST_H(float x){ //��ͷ� ������ ��� �Լ�
    if((x - 34)>0 || (x-11)/2>0){
        x = (x-11)/2;
        COMPUTE_SMALLEST_H(x);}
    else
        cout <<"���: "<< x<<endl;}
int main(){ //��ǲ�� ���� ���� �Լ�
    float x;
    cout<<"�Է�: ";
    cin >>x;
    COMPUTE_SMALLEST_H(x);
    return 0;}