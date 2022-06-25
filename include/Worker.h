#ifndef WORKER_H
#define WORKER_H

#include <Person.h>
#include <iostream>

using namespace std;

class Worker : public Person
{
    public:
        Worker(string name="empty_worker_name", string surname="empty_worker_surname", string companyName="empty_company_name", int bonus=0);

        void read();
        void display();

        ~Worker();
    protected:
        string companyName;
        int bonus; //bonus is in %, but bonus is whole number
    private:
};

#endif // WORKER_H
