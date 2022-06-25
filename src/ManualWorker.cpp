#include "ManualWorker.h"
#include <iostream>

using namespace std;

ManualWorker::ManualWorker(string name, string surname, string companyName, float hourlyRate, int hourCount):Worker(name,surname,companyName)
{
    this->hourlyRate=hourlyRate;
    this->hourCount=hourCount;

    cout<<"Constructor for class Manual Worker"<<endl;
}

void ManualWorker::read(){
    Worker::read();
    cout<<"\tInput hour rate pay (without currency):";
    cin>>hourlyRate;
    cout<<"\tInput hour count that worker worked (whole numbers):";
    cin>>hourCount;
}

float ManualWorker::calculatePay(){
    float base=hourlyRate*(float)hourCount;
    float salary=base+(base*(((float)bonus)/100));
    return salary;
}

void ManualWorker::display(){
    Worker::display();
    cout<<"\tHourly rate pay:"<<hourlyRate<<endl;
    cout<<"\tCount of worked hours:"<<hourCount<<endl;
    cout<<"\tSalary to pay to worker:"<<calculatePay()<<endl;
}

ManualWorker::~ManualWorker()
{
    cout<<"Destructor for class Manual Worker"<<endl;
}
