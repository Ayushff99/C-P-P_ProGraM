#include<iostream>
using namespace std;

int check(int val){
    if(val<=1)
        return 0;
    for(int i = 2; i * i <= val; i++){
        if(val%i==0)
            return 0;
    }
    return 1;
}
class Prime{
    int num;
    public :
         friend int check(int val); //- //defining func above/below makes no effect
        Prime(int x) : num(x){
            if(check(num)) //but, func defination should be above.
                cout<<num<<" is a prime number."<<endl;
            else
                cout<<num<<" is a not prime number."<<endl;
        }
        // friend int check(int);
};

int main() {
    int n;
    cout<<"Enter number to check prime : ";
    cin>>n;
    Prime p1(n);
    return 0;
}