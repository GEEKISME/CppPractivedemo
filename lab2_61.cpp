/*
 * @Author: your name
 * @Date: 2020-09-23 15:07:13
 * @LastEditTime: 2020-09-24 10:49:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_61.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<ctime>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2


//综合案例： 员工分组
class Worker{
    public:
    string name;
    int salary;
};
void createWorkerVector(vector<Worker> &v){
    string nameseed = "ABCDEFGHIJ";
    for (size_t i = 0; i < 10; i++)
    {
        Worker worker;
        worker.name = "员工";
        worker.name+=nameseed[i];
        worker.salary=rand()%10000+10000;
        v.push_back(worker);
    }
    
};
void setGroup(vector<Worker> &workerVector,multimap<int,Worker> &workerMap){
    for (vector<Worker>::iterator it = workerVector.begin();it!=workerVector.end();it++)
    {
        //产生随机部门编号
        int deptId = rand()%3;// 0,1,2
        // multimap 是允许有重复的键的
        workerMap.insert(make_pair(deptId,*it));

    }

    for (multimap<int,Worker>::iterator it = workerMap.begin();it!=workerMap.end();it++)
    {
        cout<<"key= "<<it->first<<" value name = "<<it->second.name<<"value salary= "<<it->second.salary<<endl;
    }
    
};

void showWorkerByGroup(multimap<int,Worker> &workermap){
    cout<<"策划部门信息"<<endl;
    multimap<int,Worker>::iterator pos =  workermap.find(CEHUA);
    int count = workermap.count(CEHUA);
    int index = 0;
    for (;pos!=workermap.end()&&index<count;pos++,index++)
    {
        cout<<"name:"<<pos->second.name<<" salary:"<<pos->second.salary<<endl;
    }
    cout<<"--------------------------"<<endl;
    cout<<"美术部门："<<endl;
    pos = workermap.find(MEISHU);
    count = workermap.count(MEISHU);
    index = 0;
    for (;pos!=workermap.end()&&index<count;pos++,index++)
    {
        cout<<"name:"<<pos->second.name<<" salary:"<<pos->second.salary<<endl;
    }
    cout<<"--------------------------"<<endl;
    cout<<"研发部门："<<endl;
    pos = workermap.find(YANFA);
    count = workermap.count(YANFA);
    index = 0;
    for (;pos!=workermap.end()&&index<count;pos++,index++)
    {
        cout<<"name:"<<pos->second.name<<" salary:"<<pos->second.salary<<endl;
    }
};
int main(){ 
    srand((unsigned int)time(NULL));
    //创建员工
    vector<Worker> workervector;
    createWorkerVector(workervector);
    for (vector<Worker>::iterator it = workervector.begin();it!=workervector.end();it++)
    {
        cout<<"name:"<<it->name<<" salary:"<<it->salary<<endl;
    }
    //员工分组
    multimap<int,Worker>workermap;
    setGroup(workervector,workermap);
    //分组显示员工
    showWorkerByGroup(workermap);







    return 0;
}