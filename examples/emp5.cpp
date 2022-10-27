#include<iostream>
using namespace std;
//Static  variables and Static Function
class student
{
private:
    static int x;
    string name;
    int age;
public:
    student(string n,int a)
    {
        x++;
        name=n;
        age=a;
    }
    void print()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age  : "<<age<<endl;
        cout<<"\n";
    }
    static int getCount()
    {
        return x;
    }
};
//Static Variable
int student::x=0;
int main()
{
    student s1("Ram",25);
    student s2("Sam",22);
    student s3("Kumar",12);
    s1.print();
    s2.print();
    s3.print();
    cout<<"Total Students : "<<student::getCount()<<endl;
    return 0;
}
