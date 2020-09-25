/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-21 15:16:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
#include <fstream>
using namespace std;
#include<string>
//程序运行时产生的数据都属于临时数据，程序一旦运行结束就会被释放掉
//通过文件可以将数据持久化
//C++中对文件操作需要包含头文件<fstream>

void test01(){
    ofstream ofs;
    //默认在当前目录下创建这个文件
    ofs.open("lab2_31.txt",ios::out);
    ofs<<"name:zhangsan"<<endl;
    ofs<<"sex:male"<<endl;
    ofs<<"age:18"<<endl;
    ofs<<"i love fcj"<<endl;
    ofs.close();
    ifstream ifs;
}
int main(){
    test01();
    return 0;
}