/*
 * @Author: your name
 * @Date: 2020-09-18 14:21:08
 * @LastEditTime: 2020-09-18 14:29:23
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_13.cpp
 */
#include<iostream>
using namespace std;
//引用的本质在c++内部实现是一个指针常量
// 指针常量就是一个指针的指向不能改变，但是指针指向的值可以改变

// 发现是引用，转换为int* const ref = &a
void func(int& ref){
    ref = 100;//ref 是引用，转换为 *ref = 100
}
int main(){
    int a = 10;
    //自动转换为int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
    int& ref = a;
    ref = 20;//内部发现ref是引用，自动帮我们转换为：*ref = 20；
    cout<<"a:"<<a<<endl;
    cout<<"ref:"<<ref<<endl;
    func(a);
    return 0;
}