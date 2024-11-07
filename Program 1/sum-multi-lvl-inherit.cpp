#include<iostream>
using namespace std;

class MultiLvlInherit{
    int num1;
    public: 
        MultiLvlInherit() : num1(5){}
        inline int val1();
};
class Base2 : public MultiLvlInherit{
    int num2;
    public:
        Base2() : num2(10){}//**** */
        inline int val2();
};
class Derived : public Base2{
    public:
        void sum();
        Derived(){
            sum();    
        }
       
};
void Derived::sum(){
    cout<<"Sum of two numbers are : "<<val1()+val2(); //Accessing private member of base class - not possible
     //Used function method to access it.
}

int MultiLvlInherit::val1(){
    return num1;
}
int Base2::val2(){
    return num2;
}

int main(){
    Derived objDer;
    return 0;
}