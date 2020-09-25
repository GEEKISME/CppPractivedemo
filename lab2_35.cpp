/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-21 16:57:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
using namespace std;
#include<string>

// 函数模板

//两个整型交换函数

void swapInt(int &a,int &b){
    int temp = a;
    a=b;
    b = temp;
}
void swapDouble(double &a,double &b){
    double temp = a;
    a=b;
    b = temp;
}

//========================================
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
 void mySwap(T &a, T &b){
     T temp = a;
     a = b;
     b = temp;
 }
//============================================

void test01(){
    int a = 10;
    int b = 20;
    swapInt(a,b);
    cout<<"a:"<<a<<" b:"<<b<<endl;
    double c= 1.1;
    double d  =2.2;
    swapDouble(c,d);
    cout<<"c:"<<c<<" d:"<<d<<endl;
    printf("=======================\n");
    //利用函数交换模板交换
    //两种方式使用函数模板
    //1. 自动类型推导
    int f = 12;
    int k = 24;
    mySwap(f,k);
    cout<<"f:"<<f<<" k:"<<k<<endl;
    printf("===============================\n");
    //2. 显示指定类型
    int s1 = 88;
    int s2 = 99;
    mySwap<int>(s1,s2);
    cout<<"s1:"<<s1<<" s2:"<<s2<<endl;

}
int main(){
    test01();
    return 0;
}