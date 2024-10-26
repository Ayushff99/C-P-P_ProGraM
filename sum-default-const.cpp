#include<iostream>
using namespace std;

class NaturalSum{
    int num;
    public:
        NaturalSum(){
            num = 5;
            int sum = (num * (num + 1))/2;
            cout<<"Default Constructor!"<<endl;
            cout<<"Sum of natural number is : "<<sum;
        }
};
int main(){
    NaturalSum objM;
    return 0;
}