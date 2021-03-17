#include<bits/stdc++.h>
using namespace std;

// Encapsulation !
class encap{
    public:
     int a;
     void functionA(){
        cout<<"functionA"<<endl;
     }
    private:
     int b;
     void functionB(){
         cout<<"functionB"<<endl;
     }
    protected:
      int c;
      void functionC(){
          cout<<"functionC"<<endl;
      }
};
int32_t main(){
    encap obj;
    obj.functionA();
    //obj can not functionB & functionC
    return 0;

}