#include<bits/stdc++.h>
using namespace std;

// function overloading !
class kartik{
    public:
    void fun(){
        cout<<"no arguments"<<endl;
    }
    void fun(int x){
        cout<<"one arguments"<<endl;
    }
    void fun(double x){
        cout<<"double arguments"<<endl;
    }
};

int32_t main(){
    kartik obj;
    obj.fun();
    obj.fun(10);
    obj.fun(4.2);
    return 0;
}