/*
 * @Author: your name
 * @Date: 2020-09-18 16:16:46
 * @LastEditTime: 2020-09-18 16:25:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_17.cpp
 */
#include<iostream>
using namespace std;
#include<string>
class Building{
    friend void goodGay(Building *building);
    public:
        Building(){
            m_SittingRoom = "客厅";
            m_BedRoom = "卧室";
        }
    public:
        string m_SittingRoom;//客厅
    private:
        string m_BedRoom;

};


//全局函数
void goodGay(Building *building){
    cout<<"好基友全局函数正在访问："<<building->m_SittingRoom<<endl;
    cout<<"好基友全局函数正在访问："<<building->m_BedRoom<<endl;
}
void test01(){
    Building b;
    goodGay(&b);
}
int main(){
    test01();
    return 0;
}