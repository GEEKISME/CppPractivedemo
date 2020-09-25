/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-22 14:01:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//普通函数与函数模板的区别
//普通函数调用可以发生隐式类型转换
//函数模板 用自动类型推到，不可以发生隐式类型转换
//函数模板 用显示指定类型，可以发生隐式类型转化
int myAdd01(int a ,int b){
    return a+b;
};


void test01(){
    int a = 10;
    int b = 20;
    char c = 'c';
    cout<<myAdd01(a,b)<<endl;
    cout<<myAdd01(a,c)<<endl; //正常运行,结果109. 发生了隐式类型转换，将‘c’转成了相应的ascii，然后与a相加    
};

template<class T>
T myAdd02(T a,T b){
    return a+b;
}

void test02(){
    int a = 20;
    int b = 30;
    char c = 'c';
    cout<<myAdd02(a,b)<<endl;
    // cout<<myAdd02(a,c)<<endl; //将会报错
    cout<<myAdd02<int>(a,c)<<endl;//不会报错，会将c转为ascii
};


int main(){
    test01();
    printf("+++++++++++++++++++++\n");
    test02();
    return 0;
}