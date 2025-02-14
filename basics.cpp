#include<iostream>
#include <string>
using namespace std;
class student
{
    public:
    string name;
    int age;
    void display()
    {
        cout<<"the name of the student is : "<<name<<endl;
        cout<<"the age of the student is : "<<age<<endl;
    }
};
int main()
{
    student s1;
    s1.name="nishanth";
    s1.age=24;
    s1.display();
    return 0;
}