/*
 * @Author: your name
 * @Date: 2020-09-21 10:21:22
 * @LastEditTime: 2020-09-21 11:29:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_24.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//多态 

//动物类
class Animal{
    public:virtual void speak(){
        cout<<"动物在说话"<<endl;
    }
};
class Cat:public Animal{
    public: void speak(){
        cout<<"小猫在说话"<<endl;
    }
};
class Dog:public Animal{
    public: void speak(){
        cout<<"小狗在说话"<<endl;
    }
};
// 地址早绑定 ，在编译阶段确定函数地址
// 如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定。我们
// 要做的处理就是在Animal 的 speak()方法前加一个virtual 关键字
void doSpeak(Animal &animal){
    animal.speak();
}
void test01(){
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}
int main(){
    test01(); //输出“动物在说话”
    return 0;
}

//动态多态要满足的条件：
//1. 有继承关系
//2. 子类重写父类的虚函数
//动态多态使用：
//父类的指针或者引用，执行子类对象