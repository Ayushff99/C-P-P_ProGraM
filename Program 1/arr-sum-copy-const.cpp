#include<iostream>
using namespace std;

class CopyArrSum{
    int arr[100];
    int n;
    public:
        CopyArrSum(int size) : n(size) {
            cout<<"Parameterized Constructor!"<<endl;
            cout<<"Enter integer value for array"<<endl;
            for(int i = 0; i < n; i++){
                cout<<"Value for index "<<i+1<<" : ";
                cin>>arr[i];
            }                                                 
        }
        CopyArrSum(CopyArrSum& prev){
            cout<<"Copy constructor!"<<endl;
            n = prev.n;
            int sum=0;
            for(int i = 0; i < n; i++){
                arr[i] = prev.arr[i];
                if(arr[i]>0)
                    sum += arr[i];
            }
            cout<<"Sum of all positive value of array is (using copy const): "<<sum;
        }
};
int main(){
    int siz;
    cout<<"Enter size for array : ";
    cin>>siz;
    CopyArrSum objM(siz);
    CopyArrSum objMcopy(objM);
    return 0;
}