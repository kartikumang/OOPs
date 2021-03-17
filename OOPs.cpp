#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    public:

    int age;

    student (){
        cout<<"Default Constructer !"<<endl;
    }
    
    ~student(){
        cout<<"Destructor called !"<<endl;
    }

    student (string s, int e){
         cout<<"Parameterised Constructer !"<<endl;
        name =s;
        age =e;
    }
    
    student(student &a){
        cout<<"Copy Constructer !"<<endl;
        name=a.name;
        age=a.age;
    }
    // void setName(string s){
    //     name=s;
    // }
    
    bool operator ==(student &a){
        if (name == a.name && age == a.age)
        {
            return true;
        }else{
            return false;
        }
    }

    void getName(){
        cout<<name<<endl;
        cout<<age<<endl;
    }


    void printinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
int32_t main(){
//    student arr[2];
//    for (int i = 0; i < 2; i++)
//    {
//      string s;
//      cin>>s;
//      arr[i].setName(s);
//      cin>>arr[i].age;  
//    }
//    for (int i = 0; i<2; i++)
//    {
//        arr[i].printinfo();
//    }

 student a("gola",20);
 a.printinfo();
 student b;
 student c=a;
 if (c==a)
 {
     cout<<"same"<<endl;
 }else{
     cout<<"not same"<<endl;
 }
    return 0;
}