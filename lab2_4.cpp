/*
 * @Author: your name
 * @Date: 2020-09-17 17:02:02
 * @LastEditTime: 2020-09-18 09:26:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_4.cpp
 */
#include<iostream>
using namespace std;
int main(){
    int a  = 10;
    int *p = &a;
    cout<<"sizeof(int *)"<<sizeof(int*)<<endl;
    cout<<"sizeof(float *)"<<sizeof(float*)<<endl;
    cout<<"sizeof(double *)"<<sizeof(double*)<<endl;
    cout<<"sizeof(long *)"<<sizeof(long*)<<endl;
    cout<<"=================================="<<endl;
    int *q = NULL;
    // cout<<"null 指针的地址："<< *q<<endl;
    // int *s = (int*)0x1100;
    // cout<<"null 指针的地址："<< *s<<endl;

    return 0;
}