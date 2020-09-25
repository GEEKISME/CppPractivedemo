/*
 * @Author: your name
 * @Date: 2020-09-18 11:24:25
 * @LastEditTime: 2020-09-18 12:30:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_10.cpp
 */
#include<iostream>
using namespace std;
//全局变量
int g_a = 30;
int g_b = 40;
const int c_g_a = 30;
int main(){
    //局部变量
    int a  = 10;
    int b = 20;
    cout<<"a address:"<<&a<<endl;
    cout<<"b address:"<<&b<<endl;
    cout<<"g_a address:"<<&g_a<<endl;
    cout<<"g_b address:"<<&g_b<<endl;
    //静态变量
    static int s_a = 10;
    static int s_b = 10;
    cout<<"s_a address:"<<&s_a<<endl;
    cout<<"s_b address:"<<&s_b<<endl;
    //常量：分为两种--1是字符串常量 2是const修饰的常量
    cout<<"字符串常量的地址为："<<&"helloworld"<<endl;
    //const修饰的常量又分为两类：1constant修饰的全局常量 2是局部常量
    return 0;
}