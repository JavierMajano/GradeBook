// GradeBoook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student Grades;
    string course = "CSCI 377 Computer Algorithms";
    Grades.setCourseName(course);
    Grades.displayMessage();
    Grades.outputGrades();
   
}


