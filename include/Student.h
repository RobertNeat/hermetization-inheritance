#ifndef STUDENT_H
#define STUDENT_H

#include <Person.h>
#include <iostream>

using namespace std;

class Student: public Person
{
    public:
        Student(string name="empty_student_name",string surname="empty_student_surname",string college="empty_college_name", int gradeCount=3);
        //^ array will be sreated in constructor Student.cpp file

        void read();    //reads (name,surname, college name, grade count, grades)
        void display(); //displays info about student (personal data, grade average, did pass semester)

        float calculateAverage();
        bool didPass();

        ~Student();
    protected:
        string college;
        int gradesCount;
        float * grades; //int * grades
    private:
};

#endif // STUDENT_H
