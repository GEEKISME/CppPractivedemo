/*
 * @Author: your name
 * @Date: 2020-09-22 13:49:02
 * @LastEditTime: 2020-09-22 16:15:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_40.cpp
 */
#include<iostream>
using namespace std;
#include<string>

// 当类模板遇到继承的时，要注意：
//1.当子类继承的父类是一个类模板时候，子类在声明的时候，要指定出父类中T的类型
//如果不指定，编译器无法给子类分配内存
//如果想灵活制定出父类中T的类型，子类也需要变为模板类

template<class T>
class Base{
    T m;
};
//必须要知道父类中T的类型,这里我们指定为 int，才能继承给子类
class Son : public Base<int>{

};
//
int main(){
   
    return 0;
}