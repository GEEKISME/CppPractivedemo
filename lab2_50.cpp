/*
 * @Author: your name
 * @Date: 2020-09-22 14:56:49
 * @LastEditTime: 2020-09-23 09:47:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_45.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>//标准算法头文件
//string的赋值操作

void test01(){
   string s1;
   s1 = "hello world";
   cout<<"s1 = "<<s1<<endl; 
   //================
   string s2;
   s2 = s1;
   cout<<"s2 = "<<s2<<endl; 
   //================
   string s3;
   s3 = 'a';
   cout<<"s3 = "<<s3<<endl;
    //================
   string s4;
   s4.assign("hello c++");
   cout<<"s4 = "<<s4<<endl;
   //================
   string s5;
   s5.assign("hello c++",5);
   cout<<"s5 = "<<s5<<endl;
   //================
   string s6;
   s5.assign(s5);
   cout<<"s6 = "<<s6<<endl;
   //================
   string s7;
   s7.assign(10,'w');
   cout<<"s7 = "<<s7<<endl;
}
int main(){
    test01();
    return 0;
}