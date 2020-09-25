/*
 * @Author: your name
 * @Date: 2020-09-21 10:22:21
 * @LastEditTime: 2020-09-21 10:55:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_25.cpp
 */
#include<iostream>
using namespace std;
#include<string>
class Animal{
    public: void speak(){
        cout<<"动物在说话"<<endl;
    }
};

int main(){
    cout<<"size of Animal without virtual = "<<sizeof(Animal)<<endl; //输出 1
    // cout<<"size of Animal with virtual = "<<sizeof(Animal)<<endl; //输出 8
    return 0;
}