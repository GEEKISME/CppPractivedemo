/*
 * @Author: your name
 * @Date: 2020-09-21 09:37:51
 * @LastEditTime: 2020-09-21 10:03:19
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_21.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//继承方式
class Base1{
    public   :int m_A;
    protected:int m_B;
    private  :int m_C;

};
class Son1 : public Base1{
    public:
    void func(){
        m_A = 10; //父类中的public在子类中依然是public
        m_B = 20; //父类中的protect在子类中依然是protect
        // m_C = 20; //父类中的private在子类中无法访问
    }
};



void test01(){
    Son1 s1;
    s1.m_A = 100; // 到Son1中m_A是public，类内类外都可以访问
    // s1.m_B = 100; // 到Son1中m_B是protected，类外方访问不到
}
//==========================================
class Base2{
    public   :int m_A;
    protected:int m_B;
    private  :int m_C;

};

class Son2 : protected Base2{
    public:void func(){
        m_A = 100; //父类中的public，在子类中变为protected
        m_B = 100; //父类中的protected，在子类中依然protected
        // m_C = 100; //父类中私有成员，子类访问不到
    }
};
void test02(){
    Son2 s2;
    // s2.m_A = 1000; //在son2中，m_A变为protected,因此类外无法访问
}
//============================================
class Base3{
    public   :int m_A;
    protected:int m_B;
    private  :int m_C;

};

class Son3 : private Base3{
    public:void func(){
        m_A = 100; //父类中的public，在子类中变为private
        m_B = 100; //父类中的private，在子类中private
        // m_C = 100; //父类中私有成员，子类访问不到
    }
};
void test03(){
    Son3 s3;
    // s3.m_A = 1000; //在son3中，m_A变为private,因此类外无法访问
}
//===============================================
class GrandSon3: public Son3{
    public : void func(){
        // m_A = 1000;//到了son3中m_A变为私private，因此grandson也就访问不到了
    }

};
int main(){

    return 0;
}