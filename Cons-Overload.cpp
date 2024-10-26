#include<iostream>

using namespace std;

class Overload{
    double val1, val2;
    public:
        Overload(int a, int b) : val1 (a), val2(b){
            cout<<"Constructor for int data type !"<<endl;            
            cout<<"Sum of value is : "<<int(val1)+int(val2)<<endl;
        }
        Overload(float a, float b) : val1 (double(a)), val2(double(b)){
            cout<<"Constructor for float data type !"<<endl;            
            cout<<"Sum of value is : "<<float(val1)+float(val2)<<endl;
        }
        Overload(char a, char b) : val1 (int(a)), val2(int(b)){
            cout<<"Constructor for char data type !"<<endl;            
            cout<<"Sum of value is : "<<int(val1)+int(val2)<<endl;
        }
};
int main(){
    Overload obj1(5,10);
    Overload obj2(3.13f, 6.63f);        //imp to add f
    Overload obj3('a', 'b');
    return 0;
}