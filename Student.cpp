#include "Student.h"
#include <iostream>
#include <iomanip>

using namespace std;

Student::Student()
{
  
}

double Student::Average()
{
    return 0.0;
}

void Student::setCourseName(string name)
{
    nameOfCourse = name;
}

string Student::getCourseName()
{
    return nameOfCourse;
}



void Student::displayMessage()
{
   cout << "Welcome to the GradeBook for \n" << getCourseName() << "!" << endl;
}

void Student::outputGrades()
{
    cout << endl;
    for (int maxStudents = 0; maxStudents < maxStudent; maxStudents++) {
        cout << names[maxStudents] << ": " << setw(2) << endl;
    }
}

void Student::chart()
{
    
}
