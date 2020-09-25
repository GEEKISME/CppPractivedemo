
/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-21 15:40:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<fstream>

void test01(){
    //包含头文件 

    //创建文件流对象
    ifstream ifs;
    //打开文件
    ifs.open("lab2_31.txt",ios::in);
    if (!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
        return;
    }
    //读数据
    //第一种  字符数组初始化全为0
    // char buf[1024] = {0};
    // while (ifs>>buf)
    // {
    //     cout<<buf<<endl;
    // }
    //第二种
    // char buf[1024] = {0};
    // while (ifs.getline(buf,sizeof(buf)))
    // {
    //     cout<<buf<<endl;
    // }
    //第三种
    // string buf;
    // while (getline(ifs,buf))
    // {
    //     cout<<buf<<endl;
    // }
    //第四种 不推荐使用，因为一次只读一个字符,效率太低了
    char c;
    while ((c= ifs.get())!=EOF)
    {
        cout<<c;
    }
    

    //关闭文件
    ifs.close();

    
}
int main(){
    test01();
    return 0;
}