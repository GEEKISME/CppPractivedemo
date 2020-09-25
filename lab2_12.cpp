/*
 * @Author: your name
 * @Date: 2020-09-18 12:47:56
 * @LastEditTime: 2020-09-18 14:31:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_12.cpp
 */
#include<iostream>
using namespace std;
// 值传递和地址传递我们已经很清楚了，但是其实还有一种传递叫引用传递
void mySwap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
//引用作为函数的返回值。有两个注意事项：1-不要返回局部变量的引用
//2-函数的调用可以作为左值
// 20-23 行代码如果解注释，编译器会报错，因为就不允许返回局部变量的引用
// int& test01(){
//     int a = 10;
//     return a;
// }

//函数的调用可以作为左值
int& test02(){
    static int a  = 1120; //静态变量，存放在全局区，全局区上的数据在程序结束后由系统释放
    return a;
}
int main(){
    //引用：给变量起别名
    //语法：数据类型 &别名 = 原名
    int a =10;
    int &b = a;
    b = 20;
    cout<<a<<endl; //将会输出20  b和a都指向 同一个地址
    cout<<b<<endl; //将会输出20  b和a都指向 同一个地址

    int c = 100;
    int d = 1000;
    mySwap(c,d); 
    //引用传递可以事实上完成交换
    cout<<"c :"<<c<<endl;//输出1000
    cout<<"d :"<<d<<endl;//输出100
    //==
    printf("=========================\n");

    // int &ref = test01();
    // cout<<"ref = "<<ref<<endl; 返回局部变量的引用将会报错

    int &ref2 = test02();
    cout<<"ref 2: "<<ref2<<endl;
    //函数调用可以作为左值  这句话是什么意思呢，如下：
    test02() = 98;  //这行代码相当于把那个静态变量 a变成了98
    cout<<"ref 2: "<<ref2<<endl; // 将会输出98 ,是不是很神奇


    return 0;
}