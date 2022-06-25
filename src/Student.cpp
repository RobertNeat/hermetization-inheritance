#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name, string surname, string college, int gradesCount):Person(name, surname)
{
    //this->name=name; //using ancestor constructor so dont have to initialize this field
    //this->surname=surname;    //using ancestor constructor so dont have to initialize this field

    this->college=college;
    this->gradesCount=gradesCount;

    grades=new float[gradesCount];  //initialization of dynamic array with value initialization in loop //grades=new int[gradesCount];
    for(int a=0;a<gradesCount;a++){
        grades[a]=2;
    }

    cout<<"Constructor of class Student"<<endl;
}

void Student::read(){
    Person::read();
    cout<<"Input college name:";
    cin>>college;
    cout<<"Input grades count:";
    cin>>gradesCount;

    delete [] grades;   //have to delete array and declare from scratch if grades count have changed
    grades = new float[gradesCount];

    for(int a=0;a<gradesCount;a++){ //read user grades
        cout<<"Input "<<a+1<<" grade:";
        cin>>grades[a];
    }
}

bool Student::didPass(){
    bool pass=true;
    for(int a=0;a<gradesCount;a++){
        if(grades[a]<=2){pass=false;}
    }
    return pass;
}

float Student::calculateAverage(){
    float average=0;
    for(int a=0;a<gradesCount;a++){
        average+=grades[a];
    }
    average=average/gradesCount;
    return average;
}

void Student::display(){
    Person::display();  //name is obscured by descendant (thats why using scope operator
    cout<<"\tCollege:"<<college<<endl<<"\tGrades:";
    for(int a=0;a<gradesCount;a++){
        cout<<grades[a]<<",";
    }
    cout<<endl<<"Student passed semester (0-false, 1-true) :"<<didPass()<<endl;
    cout<<"Student got average:"<<calculateAverage()<<endl;
}

Student::~Student()
{
    delete [] grades;
    cout<<"Destructor of class Student"<<endl;
}
