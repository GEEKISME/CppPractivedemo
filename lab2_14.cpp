/*
 * @Author: your name
 * @Date: 2020-09-18 15:10:48
 * @LastEditTime: 2020-09-18 15:22:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\2_14.cpp
 */
#include<iostream>
using namespace std;
void showValue(int& val){
    cout<<"val:"<<val<<endl;
}
int main(){
    //常量引用
    //使用场景：用来修饰形参，防止误操作
    int a = 10;
    // int& ref = 10;  直接报错，因为引用必须引一块合法的内存空间
    // 但是下面这行是不报错的。因为加了const后，编译器将代码改为了
    // int temp = 10; int& ref = temp;
    const int& ref = 10;  
    // ref = 20;// 加入const之后变为只读，不可以修改
    int b  = 40;
    showValue(b);
    cout<<"b:"<<b<<endl;

    return 0;
}