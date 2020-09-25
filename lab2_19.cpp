/*
 * @Author: your name
 * @Date: 2020-09-18 16:59:01
 * @LastEditTime: 2020-09-21 09:26:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_19.cpp
 */
#include<iostream>
using namespace std;
#include<string>
// 普通页面实现
//Java 页面
class Java{
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
    void content(){
        cout<<"Java学科视频"<<endl;
    }
};

//python 页面
class Python{
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
    void content(){
        cout<<"Python学科视频"<<endl;
    }
};
//C++
class Cpp{
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
    void content(){
        cout<<"C++学科视频"<<endl;
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
    Cpp cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}
int main(){
    test01();
    return 0;
}