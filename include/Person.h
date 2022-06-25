#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
    public:
        Person(string name="empty", string surname="empty");

        void read();
        void display();

        ~Person();
    protected:
        string name, surname;
    private:
};

#endif // PERSON_H
