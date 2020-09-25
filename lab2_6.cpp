/*
 * @Author: your name
 * @Date: 2020-09-17 17:23:04
 * @LastEditTime: 2020-09-17 17:26:31
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_6.cpp
 */
#include<iostream>
using namespace std;
void swap(int* a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a  = 10;
    int b = 20;
    swap(&a,&b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}