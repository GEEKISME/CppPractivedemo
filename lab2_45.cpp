/*
 * @Author: your name
 * @Date: 2020-09-22 14:56:49
 * @LastEditTime: 2020-09-22 16:43:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_45.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include "lab2_45_1.cpp"
// 类模板分文件编写问题以及解决
// template<class T1,class T2>
// class Person{
//     public:
//     Person(T1 name,T2 age);
//     void showPerson();
//     T1 name;
//     T2 age;
// };

//构造函数的类外实现
// template<class T1,class T2>
// Person<T1,T2>::Person(T1 name,T2 age){
//     this->age = age;
//     this->name = name;
// }
//成员函数的类外实现
// template<class T1,class T2>
// void Person<T1,T2>::showPerson(){
//     cout<<"name:"<<this->name<<" age:"<<this->age<<endl;
// };

void test01(){
    Person<string,int> p("Jerry",18);
    p.showPerson();
}
int main(){
    test01();
    return 0;
}