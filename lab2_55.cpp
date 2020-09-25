/*
 * @Author: your name
 * @Date: 2020-09-23 09:49:14
 * @LastEditTime: 2020-09-23 14:40:52
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_55.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<stack>
//stack不允许有遍历行为

void test01(){
    stack<int> sk;
    sk.push(10);
    sk.push(20);
    sk.push(30);
    sk.push(40);
    sk.push(50);
    cout<<"栈的大小："<<sk.size()<<endl;
    //只要sk不为空，就查看栈顶，并执行出栈操作
    while (!sk.empty())
    {
        //查看栈顶元素
        cout<<"当前栈顶元素："<<sk.top()<<endl;
        sk.pop();
    }
    cout<<"栈的大小："<<sk.size()<<endl;
}
int main(){
    test01();
    return 0;
}