#include<iostream>
using namespace std;

class Base{
    protected:
        int num1, num2;
    public:
        Base() : num1(5), num2(9){}
        
};
class Derived1 : public Base{
    public:
        Derived1(){
            cout<<"From Constructor of Derived 1"<<endl
                <<"First number is : "<<num1<<endl;
        }
};
class Derived2 : public Base{
    public:
        Derived2(){
            cout<<"From Constructor of Derived 2"<<endl
                <<"Second Number is : "<<num2<<endl;
        } 
};


int main(){
    Derived1 objD1;
    Derived2 objD2;
    return 0;
}