#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(string name, string surname)
{
    this->name=name;
    this->surname=surname;
    cout<<"Constructor of class Person"<<endl;
}

void Person::read(){
    cout<<"Input name:";
    cin>>name;
    cout<<"Input surname:";
    cin>>surname;
}

void Person::display(){
    cout<<"\tName:"<<name<<endl<<"\tSurname:"<<surname<<endl;
}

Person::~Person()
{
    cout<<"Destructor of class Person"<<endl;
}
