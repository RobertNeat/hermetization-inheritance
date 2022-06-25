#ifndef INTELLECTWORKER_H
#define INTELLECTWORKER_H

#include <Worker.h>
#include <iostream>

using namespace std;

class IntellectWorker : public Worker
{
    public:
        IntellectWorker(string name="empty_intellect_worker_name", string surname="empty_intellect_worker_surname", string companyName="empty_intellect_worker_company_name", float monthlySalary=0);

        void read();
        void display();

        float calculatePay();

        ~IntellectWorker();
    protected:
        float monthlySalary;
    private:
};

#endif // INTELLECTWORKER_H
