/*
 * @Author: your name
 * @Date: 2020-09-23 09:48:12
 * @LastEditTime: 2020-09-23 09:58:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_51.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//string的字符串拼接
void test01(){
    string s1 = "wo";
    s1+="ai wan you xi";
    cout<<"s1 = "<<s1<<endl;
    s1+=':';
    cout<<"s1 = "<<s1<<endl;
    string s2 = "lol dnf";
    s1+=s2;
    cout<<"s1 = "<<s1<<endl;

    printf("===================\n");
    string s3 = "I";
    s3.append("love");
    cout<<"s3 = "<<s3<<endl;
    s3.append("game abcde",4);
    cout<<"s3 = "<<s3<<endl;
    s3.append(s2);
    cout<<"s3 = "<<s3<<endl;
    s3.append(s2,0,3);
    cout<<"s3 = "<<s3<<endl;
}
int main(){
    test01();
    return 0;
}