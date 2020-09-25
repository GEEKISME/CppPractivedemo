/*
 * @Author: your name
 * @Date: 2020-09-22 14:56:49
 * @LastEditTime: 2020-09-23 09:38:52
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_45.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>//标准算法头文件
// string 是c++风格的字符串，string本质上是一个类
//string和char* 的区别：char*是一个指针，string是一个类，类内部
//封装了char*，管理这个字符串，是一个char*型的容器
//特点：string 类内部封装了很多成员方法，例如查找find,copy,delete
//，replace，insert。
//string管理char*所 分配的内存，不用担心复制越界和取值越界，由类内部进行负责

//string的构造函数
/*
string()
string(const char* s)
string(const string& str)
string(int n,char c)
*/
void test01(){
    string s1; //默认构造
    const char* str = "hello world";
    string s2(str);
    cout<<"s2 = "<<s2<<endl;
    string s3(s2);
    cout<<"s3 = "<<s3<<endl;
    string s4(10,'a');
    cout<<"s4 = "<<s4<<endl;
    
}

int main(){
    test01();
    return 0;
}