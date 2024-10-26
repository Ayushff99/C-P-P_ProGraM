#include<iostream>
using namespace std;

class base1{
    protected:
        int n1;
    public:
        base1() : n1(10){}
};
class base2{
    protected:
        int n2;
    public:
        base2() : n2(20){}
};
class Derived : public base1, public base2{
    public:
        Derived(){
            cout<<"sum of two numbers are : "<<n1+n2;
        }
};
int main() {
    Derived obj;
    return 0;
}