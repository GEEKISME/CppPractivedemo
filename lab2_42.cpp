/*
 * @Author: your name
 * @Date: 2020-09-22 13:49:02
 * @LastEditTime: 2020-09-22 15:57:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_40.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//类模板对象做函数参数
//1. 指定传入类型
//2。参数模板化

template<class T1,class T2>
class Person{
    public:
    T1 name;
    T2 age;
    Person(T1 name, T2 age){
        this->name = name;
        this->age = age;
    }
    void showPerson(){
        cout<<"name:"<<this->name<<" age:"<<this->age<<endl;
    }
};
//1. 指定传入类型
void printPerson1(Person<string,int> &p){
    p.showPerson();
}
void test01(){
    Person<string,int > p("Tom",12);
    printPerson1(p);
}

template<class T1,class T2>
void printPerson2(Person<T1,T2> &p){
    p.showPerson();
    cout<<"T1 的类型为："<<typeid(T1).name()<<endl;
    cout<<"T2 的类型为："<<typeid(T2).name()<<endl;
}
void test02(){
    Person<string,int > p("zhubajie",12);
    printPerson2(p);
}
//3. 整个类模板化
template<class T>
void printPerson3(T &p){
    p.showPerson();
    cout<<"T 的类型"<< typeid(T).name()<<endl;
};

void test03(){
    Person<string,int > p("tangseng",90);
    printPerson3(p);
}

int main(){
    test01();
    printf("++++++++++++++++++++++++++++++\n");
    test02();
    printf("++++++++++++++++++++++++++++++\n");
    test03();
    return 0;
}