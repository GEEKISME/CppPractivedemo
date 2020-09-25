/*
 * @Author: your name
 * @Date: 2020-09-23 09:48:34
 * @LastEditTime: 2020-09-23 11:05:26
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_52.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//string的find和replace。find查找指定字符串是否存在。replace在指定位置替换字符串
void test01(){
    string s1 = "abcdefg";
    int pos = s1.find("de");
    int pos1 = s1.find("df");
    if (pos1 == -1)
    {
        cout<<"未找到字符串"<<endl;
    }else{
        cout<<"找到字符串，位置是："<<pos1<<endl;
    }
    
    cout<<"pos = "<<pos<<endl;
    cout<<"pos1 = "<<pos1<<endl;

    //rfind 和find的区别： rfind从右往左查，find是从左往右查
    s1.rfind("de");
}

void test02(){
    string s2 = "abcdefg";
    s2.replace(1,3,"1111");//将 bcd 替换为 1111
    cout<<"s2 = "<<s2<<endl;
}
//字符串比较
void test03(){
    string s1 = "hello";
    string s2 = "hello";
    if (s1.compare(s2)==0)
    {
        cout<<"s1 = s2"<<endl;
    }

    string s3 = "xhello";
    if (s3.compare(s2)>0)
    {
        cout<<"s3>s2"<<endl;
    }
}
//字符串存取
void test04(){
    string s4 = "hello";
    int strsize = s4.size();
    //通过[]访问单个字符
    for (size_t i = 0; i < strsize; i++)
    {
        cout<<s4[i]<<" ";
    }
    cout<<endl;
    printf("=================\n");
    for (size_t i = 0; i < strsize; i++)
    {
        cout<<s4.at(i)<<" ";
    }
    cout<<endl;
    printf("======================\n");
    s4[0] = 'x';
    s4.at(1) = 'x';
    cout<<"s4 = "<<s4<<endl;
}

//字符串的插入删除
void test05(){
    string s1 = "hello";
    s1.insert(1,"111");
    cout<<"s1 = "<<s1<<endl;

    s1.erase(1,3);
    cout<<"s1 = "<<s1<<endl;

}

void test06(){
    string s = "abcdef";
    string sub = s.substr(1,3);
    cout<<"sub = "<<sub<<endl;
    printf("===========================\n");
    string email = "zhangsan@sina.com";
    int pos = email.find("@");
    string username = email.substr(0,pos);
    cout<<"username : "<<username<<endl;

}
int main(){
    test01();
    printf("=====================\n");
    test02();
    printf("=====================\n");
    test03();
    printf("=====================\n");
    test04();
    printf("=====================\n");
    test05();
    printf("=====================\n");
    test06();
    return 0;
}