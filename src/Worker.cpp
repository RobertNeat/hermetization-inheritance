#include "Worker.h"
#include <iostream>

using namespace std;

Worker::Worker(string name, string surname, string companyName, int bonus):Person(name,surname)
{
    this->companyName=companyName;
    this->bonus=bonus;

    cout<<"Constructor of class Worker"<<endl;
}

void Worker::read(){
    Person::read();
    cout<<"\tInput company name:";
    cin>>companyName;
    cout<<"\tInput bonus in % (dont input % sign nor fraction values):";
    cin>>bonus;
}

void Worker::display(){
    Person::display();
    cout<<"\tCompany:"<<companyName<<endl<<"\tBonus:"<<bonus<<"%"<<endl;
}

Worker::~Worker()
{
    cout<<"Destructor for class Worker"<<endl;
}
