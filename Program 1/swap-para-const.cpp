#include<iostream>
using namespace std;

class Swap{
    int fir, sec;
    public:
        Swap(int num1, int num2) : fir(num1), sec(num2) {
            cout<<"Number before swap!"<<endl
                <<fir<<" "<<sec<<endl;                    
            int temp = num1;
            fir = sec;
            sec = temp;
            cout<<"Number after swap!"<<endl
                <<fir<<" "<<sec<<endl;                    
        }
};
int main(){
    int a, b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    Swap objM(a, b);
    return 0;
}