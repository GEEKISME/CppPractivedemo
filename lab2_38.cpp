/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-22 14:08:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//1, 如果函数模板和普通函数都可以调用，优先调用普通函数
//2、可以通过空模板参数列表强制调用 函数模板
//3、函数模板也可以发生函数重载
//4、如果函数模板可以产生更好的匹配，则优先调用函数模板

void myPrint(int a,int b){
    cout<<"调用普通函数"<<endl;
};
template<class T>
void myPrint(T a,T b){
    cout<<"调用模板"<<endl;
}

void test01(){
    int a = 10;
    int b = 10;
    myPrint(a,b);
    myPrint<>(a,b);
}
int main(){
    test01();
    return 0;
}