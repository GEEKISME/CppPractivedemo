/*
 * @Author: your name
 * @Date: 2020-09-23 15:07:02
 * @LastEditTime: 2020-09-24 09:57:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_60.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<map>
// map 中所有元素都是pair
//pair 中第一个元素为key,起索引作用，第二个元素为value
//所以元素都会根据元素键值自动排序
//map不允许容器中有重复的key
//multimap 允许有重复的key


void printMap(map<int,int> &m){
    for (map<int,int>::iterator it = m.begin();it!=m.end();it++)
    {
        cout<<"key:"<<(*it).first<<" value:"<<(*it).second<<endl;
    }
    cout<<endl;
    
};
void test01(){
    //创建map容器
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(5,50));
    if (m.empty())
    {
        cout<<"m为空"<<endl;
    }else{
        cout<<"m is not null"<<endl;
        cout<<"m size is :"<<m.size()<<endl;
    }
    
    printMap(m);

    map<int,int>m2(m);
    printMap(m2);
    map<int,int> m3;
    m3 = m2;
    printMap(m3);
}
void test02(){
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));  
    map<int,int> m2;
    m2.insert(pair<int,int>(4,100));
    m2.insert(pair<int,int>(5,200));
    m2.insert(pair<int,int>(6,300));
    cout<<"swap before"<<endl;
    printMap(m);
    printMap(m2);
    cout<<"swap after"<<endl;
    m.swap(m2);
    printMap(m);
    printMap(m2);
};
//map 元素的插入与删除
void test03(){
    //插入
    //第一种
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    //第二种  建议使用
    m.insert(make_pair(2,20));
    //第三种
    m.insert(map<int,int>::value_type(3,30));
    //第四种
    m[4] = 40;
    cout<<m[5]<<endl;
    printMap(m);
    //删除
    m.erase(m.begin()); // 用迭代器删除第一个
    m.erase(3); //删除key为3的pair
    printMap(m);
    cout<<"all remove"<<endl;
    m.erase(m.begin(),m.end()); //这等价于 m.clear();
    printMap(m);
};
//map 中的查找以及统计数据
//find(key)查找key是否存在，若存在，返回该键的迭代器，不存在则返回set.end();
// count(key)统计key元素的个数
void test04(){
    map<int,int>m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(3,30));//这一行是没用的，map不允许插入重复的key
    map<int,int>::iterator pos = m.find(3);
    if (pos!=m.end())
    {
        cout<<"找到元素了,key="<<(*pos).first<<"value="<<pos->second<<endl;;
    }else{
        cout<<"未找到数据"<<endl;
    }
    //统计，因为map是不允许插入重复key元素的，count统计而言，结果要么0，要么1
    int num = m.count(3);
    cout<<"num = "<<num<<endl;
}
//map容器默认的排序规则为按照key值进行从小到大排序
//利用仿函数，可以自定义排序规则

class MyCompare{
    public:
    bool operator()(int v1,int v2){// 第一个小括号代表我们要重载的运算符
        return v1>v2;
    }
};

void test05(){
    //我们必须在开始插数据之前就设置好插入时的排序规则
    map<int,int,MyCompare>m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(4,40));
    m.insert(make_pair(5,50));
    for (map<int,int,MyCompare>::iterator it = m.begin();it!=m.end();it++)
    {
        cout<<"key= "<<it->first<<" value = "<<it->second<<endl;
    }
    
};
int main(){
    test01();
    printf("==================\n");
    test02();
    printf("==================\n");
    test03();
    printf("==================\n");
    test04();
    printf("==================\n");
    test05();
    return 0;
}

//map中所有元素都成对出现，插入数据时要使用对组