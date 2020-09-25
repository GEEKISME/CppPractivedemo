/*
 * @Author: your name
 * @Date: 2020-09-18 16:16:46
 * @LastEditTime: 2020-09-18 16:53:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_17.cpp
 */
#include<iostream>
using namespace std;
#include<string>

//加号运算符重载
class Person{
    
    public:
    //1. 成员函数重载加号
    // Person operator+(Person &p){
    //     Person temp ;
    //     temp.m_B = this->m_B+p.m_B;
    //     temp.m_A = this->m_A+p.m_A;
    //     return temp;
    // }
        int m_A;
        int m_B;
};
//1. 成员函数重载+号
//2. 全局函数重载+号
Person operator+(Person &p1,Person &p2){
    Person temp;
    temp.m_A = p1.m_A+p2.m_A;
    temp.m_B = p1.m_B+p2.m_B;
    return temp;
}
void test01(){
    Person p1;
    Person p2;
    p1.m_A = 10;
    p1.m_B = 10;
    p2.m_A = 10;
    p2.m_B = 10;
    Person p3 = p1+p2;
    cout<<"p3.m_a:"<<p3.m_A<<endl;
    cout<<"p3.m_b:"<<p3.m_B<<endl;
}
int main(){
    test01();
    return 0;
}