/*
 * @Author: your name
 * @Date: 2020-09-21 10:03:34
 * @LastEditTime: 2020-09-21 11:29:57
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_22.cpp
 */
#include<iostream>
using namespace std;
#include<string>

class Base{
    public   :int m_A;
    protected:int m_B;
    private  :int m_C;

};

class Son : protected Base{
    public:int m_D;
    
};

void test01(){
    //将会输出16，父类中所有非静态成员属性都会被子类继承
    //父类中private成员是被编译器隐藏了，因此访问不到，但是确实被继承下去了
    cout<<"size of son="<<sizeof(Son)<<endl; 
}

int main(){
    test01();
    return 0;
}