/*
 * @Author: your name
 * @Date: 2020-09-21 10:22:53
 * @LastEditTime: 2020-09-21 13:14:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_27.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//纯虚函数，抽象类
class Base{
    public:
    //下面就是 纯虚函数，包含纯虚函数的类叫抽象类
    //抽象类的子类必须要重写父类中的纯虚函数，否则子类也属于抽象类
    virtual void func() = 0;
};

class Son : public Base{
    public:
    void func(){
        cout<<"Son 的 func实现"<<endl;
    }
};
void test01(){
    Son s;
    s.func();
    printf("========================\n");
    Base *base = new Son;
    base->func();
};
int main(){
    test01();
    return 0;
}