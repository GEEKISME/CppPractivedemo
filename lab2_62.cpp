/*
 * @Author: your name
 * @Date: 2020-09-23 15:07:13
 * @LastEditTime: 2020-09-24 11:07:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_61.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<map>
//函数对象 ： 重载函数调用操作符的类，其对象常称为函数对象。函数对象使用重载的（）时，行为类似函数调用，也叫仿函数
// 函数对象（仿函数）是一个类，不是一个函数
//函数对象的使用特点： 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//函数对象超出普通函数的概念，函数对象可以有自己额状态。函数对象可以作为参数传递

class MyAdd{
    public:
    int operator()(int v1,int v2){
        return v1+v2;
    }
};
//1.函数对象再使用时，可以像普通函数那样调用，可以有参数，可以有返回值
void test1(){
    MyAdd myadd;
    cout<<myadd(10,20)<<endl;
}
//2. 函数对象超出普通函数的概念，函数对象可以有自己额状态
class MyPrint{
    public:
    MyPrint(){
        this->count = 0;
    }
    void operator()(string test){
        cout<<test<<endl;
        this->count++;
    }
    int count;
};
void test2(){
    MyPrint myprint;
    myprint("hello");
    myprint("hello");
    myprint("hello");
    myprint("hello");
    myprint("hello");
    cout<<"myprint调用次数为："<<myprint.count<<endl;
};
// 3. 函数对象可以作为参数传递
void doPrint(MyPrint &mp,string test){
    mp(test);
}
void test3(){
    MyPrint myprint;
    doPrint(myprint,"hello C++");
}
int main(){
    test1();
    printf("==================\n");
    test2();
    printf("==================\n");
    test3();
    
    return 0;
}