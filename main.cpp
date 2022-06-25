#include <iostream>

#include "Person.h"
#include "Student.h"
#include "Worker.h"
#include "ManualWorker.h"
#include "IntellectWorker.h"

using namespace std;

void line(){cout<<"-----------------------------------------------------------"<<endl;}

int main()
{
    //----------Person-class-objects----------
        line();
        cout<<"Operations on Person class"<<endl;
        line();

        Person person1; //default constructor
        person1.display();

        line();

        Person person2("John","Kovalsky");  //overloaded constructor
        person2.display();

        line();

        Person person3;
        person3.read();
        person3.display();

    //----------Student-class-objects----------
        line();
        cout<<"Operations on Student class"<<endl;
        line();

        Student student1;   //default constructor
        student1.display();

        line();

        Student student2("Adam","Novak","POLLUB",5);
        student2.display();
        //student2.Person::display();   //method from ancestor class

        line();

        Student student3;
        student3.read();
        student3.display();

    //----------Worker-class-objects----------
        line();
        cout<<"Operations on Worker class"<<endl;
        line();

        Worker worker1; //defalut constructor
        worker1.display();

        line();

        Worker worker2("Pablo","Picasso","Pablo_Incorp",30);
        worker2.display();
        //worker2.Person::display();    //method from ancestor class

        line();

        Worker worker3;
        worker3.read();
        worker3.display();

    //----------ManualWorker-class-objects----------
        line();
        cout<<"Operations on Manual Worker class"<<endl;
        line();

        ManualWorker manualworker1;
        manualworker1.display();

        line();

        ManualWorker manualworker2("Boris","Fastswimmer","SwimNet",2.3,5);
        manualworker2.display();

        line();

        ManualWorker manualworker3;
        manualworker3.read();
        manualworker3.display();

    //----------IntellectWorker-class-objects----------
        line();
        cout<<"Operations on Intellect Worker class"<<endl;
        line();

        IntellectWorker intellectworker1;
        intellectworker1.display();

        line();

        IntellectWorker intellectworker2("Frank","Black","CarloNet",5000.5);
        intellectworker2.display();

        line();

        IntellectWorker intellectworker3;
        intellectworker3.read();
        intellectworker3.display();

        return 0;
}
