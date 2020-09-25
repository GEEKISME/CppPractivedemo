/*
 * @Author: your name
 * @Date: 2020-09-18 15:24:03
 * @LastEditTime: 2020-09-18 16:08:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_15.cpp
 */
#include<iostream>
using namespace std;
//设计一个圆类，求圆的周长
const double PI = 3.14;
class Circle{
    //访问权限，公共权限
    public:
    //属性
    //半径
    int radius;
    //行为
    double calculateZC(){
        return 2*PI*radius;
    }
};

class Person{
    public:
    //构造函数没有返回值不用写void
    //函数名与类名相同。构造函数可以有参数，可以发生重载
    //创建对象的时候，构造函数会自动调用，而且只调用一次
    Person(){
        cout<<"Person构造函数被调用"<<endl;
    }

    //析构函数 进行清理的操作
    //函数名与类名相同，在名称前加~
    //不能有参数，不可以重载
    //对象销毁前，会自动调用析构函数，而且只会调用一次
    ~Person(){
        cout<<"Person的析构函数调用"<<endl;
    }

};

void test01(){
    Person p;//这个对象创建在栈上，test01运行完毕后就会销毁p
}

int main(){
    Circle c1;
    c1.radius = 10;
    cout<<"周长为："<<c1.calculateZC()<<endl;
    printf("================================\n");
    test01();
    return 0;
}