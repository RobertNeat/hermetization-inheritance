#ifndef MANUALWORKER_H
#define MANUALWORKER_H

#include <Worker.h>
#include <iostream>

using namespace std;

class ManualWorker : public Worker
{
    public:
        ManualWorker(string name="empty_manual_worker_name", string surname="empty_manual_worker_surname", string companyName="empty_manual_worker_company_name", float hourlyRate=0, int hourCount=0);

        void read();
        void display();

        float calculatePay();

        ~ManualWorker();
    protected:
        float hourlyRate;
        int hourCount;
    private:
};

#endif // MANUALWORKER_H
