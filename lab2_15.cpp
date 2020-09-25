/*
 * @Author: your name
 * @Date: 2020-09-18 15:24:03
 * @LastEditTime: 2020-09-18 15:29:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_15.cpp
 */
#include<iostream>
using namespace std;
//函数默认参数
int func(int a,int b = 20,int c = 30){
    return a+b+c;
}
//函数占位参数，占位参数也可以有默认参数
void func1(int a,int){
    cout<<"this is func"<<endl;
}
int main(){
    cout<<func(10)<<endl;
    func1(10,10);
    return 0;
}