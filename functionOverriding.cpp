#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    virtual void print(){
         cout<<"base class print function"<<endl;
     }
     void display(){
         cout<<"base class display function"<<endl;
     }
};

class dervied :public base{
    public:
     void print(){
         cout<<"dervied class print function "<<endl;
     }
     void display(){
         cout<<"dervied class display function "<<endl;
     }
};

int32_t main(){
    base *baseptr;
    dervied d;
    baseptr = &d;
    baseptr ->print();
    baseptr ->display();
    return 0;
}