/*
 * @Author: your name
 * @Date: 2020-09-18 12:26:49
 * @LastEditTime: 2020-09-18 12:46:51
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_11.cpp
 */
#include<string>
#include<iostream>
using namespace std;
int* func(){
    //利用new关键字，可以将数据开辟到堆区，并返回开辟的堆区的内存地址
    int* p = new int(10);
    return p;
}
void test01(){
    int* q = func();
    cout<<*q<<endl;
    cout<<*q<<endl;
    cout<<*q<<endl;
    //堆区的数据有程序员管理开辟，也有程序员管理释放
    //如果想释放堆区的数据，利用关键字delete
    delete q;
    printf("========================\n");
    cout<<*q<<endl; // 内存已经被释放。再次访问就是非法操作，会报错

}

//在堆区利用new开辟数组
void test02(){
    //在堆区创建10整型数据数组
    int* s = new int[10];
    for (size_t i = 0; i < 10; i++)
    {
        s[i] = 100+i;
    }
    for (size_t i = 0; i < 10; i++)
    {
        cout<<s[i]<<endl;
    }
    
    //释放堆区数组,释放数组的时候要加[]才可以
    delete[] s;
}
int main(){
    // test01();
    test02();
    return 0;
}
