#include<bits/stdc++.h>
using namespace std;
// single inhertance !
class A{
    public:
     void funcA(){
         cout<<"hello inhertance !";
     }
};
class B : public A{

};
int32_t main(){
    B b;
    b.funcA();
    return 0;
}