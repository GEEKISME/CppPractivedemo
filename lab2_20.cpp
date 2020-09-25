/*
 * @Author: your name
 * @Date: 2020-09-21 09:27:24
 * @LastEditTime: 2020-09-21 09:32:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_20.cpp
 */
#include<iostream>
using namespace std;
#include<string>

//继承实现
class BasePage{
    public:
    void header(){
        cout<<"首页，公开课，登录,注册..(公共头部)"<<endl;
    }
    void footer(){
        cout<<"帮助中心，交流合作，站内地图..(公共底部)"<<endl;
    }
    void left(){
        cout<<"Java/python/C++..(公共分类列表)"<<endl;
    }
};
//java 页面
class Java : public BasePage{
    public:
    void content(){
        cout<<"Java学科视频"<<endl;
    }
};
//python页面
class Python : public BasePage{
    public:
    void content(){
        cout<<"Python学科视频"<<endl;
    }
};
//Cpp页面
class CPP : public BasePage{
    public:
    void content(){
        cout<<"CPP学科视频"<<endl;
    }
};
void test01(){
    cout<<"java 下载视频页面如下："<<endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout<<"-------------------------------"<<endl;
    cout<<"python 下载视频页面如下："<<endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
    cout<<"-------------------------------"<<endl;
    cout<<"C++ 下载视频页面如下："<<endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}
int main(){
    test01();
    return 0;
}