#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string n, int a)
    {
        this->name = n;
        this->age = a;
    };
};

class Student : public Person
{
public:
    string id;

    Student(string name,int age,string id):Person(name,age){
        this->id=id;

    }

    void showInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Student ID : "<<id<<endl;
    }
};

int main()
{
    Student s1("Alyan",19,"25K-0648");
    s1.showInfo();
}