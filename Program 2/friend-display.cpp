#include<iostream>
#include<string>
using namespace std;

class Student{
    string name, department, course;
    int age;
    public:
        friend void friDisplay(Student &obj);
        Student(string n, int a, string dept, string cuse){
            name = n;
            age = a;
            department = dept;
            course = cuse;
            // friDisplay(*this);
        }
        friend void friDisplay(Student& obj);
        
};
void friDisplay(Student & obj){
    cout<<"Student details - "<<endl
        <<"Name - "<<obj.name<<endl
        <<"Age - "<<obj.age<<endl
        <<"Department - "<<obj.department<<endl
        <<"Course - "<<obj.course<<endl;
}
int main() {
    Student s1("Ayush Rawat", 20, "CS", "B.tech");
    friDisplay(s1); //not - s1.fridisplay(s1)
    return 0;
}