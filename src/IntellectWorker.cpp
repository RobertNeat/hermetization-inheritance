#include "IntellectWorker.h"
#include <iostream>

using namespace std;

IntellectWorker::IntellectWorker(string name, string surname, string companyName, float monthlySalary):Worker(name, surname, companyName)
{
    this->companyName=companyName;
    this->monthlySalary=monthlySalary;

    cout<<"Constructor of class Intellect Worker"<<endl;
}

void IntellectWorker::read(){
    Worker::read();
    cout<<"Monthly salary (without currency):";
    cin>>monthlySalary;
}

float IntellectWorker::calculatePay(){
    int a=0;
    float pay=0;
    cout<<"Input month count which will be paid:";
    cin>>a;
    pay=(((float)a)*monthlySalary)+((((float)a)*monthlySalary)*(((float)bonus)/100));
    return pay;
}

void IntellectWorker::display(){
    float b=calculatePay();
    Worker::display();
    cout<<"Monthly salary: "<<monthlySalary<<" eur/month"<<endl;
    cout<<"Worker will be paid: "<<b<<" eur"<<endl;
}

IntellectWorker::~IntellectWorker()
{
    cout<<"Destructor of dlass Intellect Worker"<<endl;
}
