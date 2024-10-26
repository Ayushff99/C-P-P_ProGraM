#include<iostream>
using namespace std;

class SingleInherit{
    public:     //if both number are priv member them product member of derived class cant access it.?
    int num1, num2;
        SingleInherit(){ //?not required to mention base class cons in derived
            num1 = 5;
            num2 = 10;
        }
};
class Derived : public SingleInherit{
    public:
        void product();
        Derived(){
            product();
        }

};

void Derived::product(){
    cout<<"Product of "<<num1<<" and "<<num2<<" is : "<<num1*num2;
}
int main(){
    Derived objM;
    return 0;
}