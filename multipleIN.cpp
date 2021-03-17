#include<bits/stdc++.h>
using namespace std;
// multiple inheritance !
class A{
    public:
     void funcA(){
         cout<<"hello inheritance !"<<endl;
     }
};

class B{
   public:
    void funcB(){
        cout<<"innnntance"<<endl;
    }
};

class C : public A ,public B{
    public:
     void funcC(){
         cout<<"hello IN"<<endl;
     }
};
int32_t main(){
    C c;
    c.funcA();
    c.funcB();
    c.funcC();
    return 0;
}