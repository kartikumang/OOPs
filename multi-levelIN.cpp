#include<bits/stdc++.h>
using namespace std;
// multi-level inheritance
class A{
    public:
     void Afunc(){
         cout<<"inheritance 1"<<endl;
     }
};

class B : public A {
    public:
     void Bfunc(){
         cout<<"inheritance 2"<<endl;
     }
};

class C :public B{
   public:
    void Cfunc(){
        cout<<"inheritance 3"<<endl;
    }
};


int32_t main(){
    C c;
    c.Afunc();
    c.Bfunc();
    c.Cfunc();
    return 0;
}