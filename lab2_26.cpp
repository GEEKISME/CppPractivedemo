/*
 * @Author: your name
 * @Date: 2020-09-21 10:22:44
 * @LastEditTime: 2020-09-21 11:30:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_26.cpp
 */
#include<iostream>
using namespace std;
#include<string>

class Calculator{
    public:int getResult(string oper){
        if(oper == "+")
        {
            return m_Num1+m_Num2;
        }else if (oper=="-")
        {
            return m_Num1-m_Num2;
        }else if (oper == "*")
        {
            return m_Num1*m_Num2;
        }
        //乘方，开方操作等等.............要加新操作必须修改这个类。。不符合开闭原则
    }
    public:int m_Num1;
    public:int m_Num2;
};
void test01(){
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;
    cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
    cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.getResult("-")<<endl;
    cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.getResult("*")<<endl;
}
//============================================
//利用多态实现计算机
//实现计算机抽象类
class AbstractCalculator{
    public:
    virtual int getResult(){
        return 0;
    };
    int m_Num1;
    int m_Num2;
};
class AddCalculator:public AbstractCalculator{
    public:
    int getResult(){
        return m_Num2+m_Num1;
    }
};
class SubCalculator:public AbstractCalculator{
    public:
    int getResult(){
        return m_Num1-m_Num2;
    }
};
class MulCalculator:public AbstractCalculator{
    public:
    int getResult(){
        return m_Num1*m_Num2;
    }
};

void test02(){
    //多态使用
    //父类指针或者引用指向子类对象

    //加法运算
    AbstractCalculator *abc = new AddCalculator();
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
    //由于是new出来的AddCalculator,其在堆区，因此用完记得销毁
    delete abc;
}
int main(){
    test01();
    printf("====================================\n");
    test02();
    return 0;
}

