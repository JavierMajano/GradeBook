#pragma once
#include <iostream>

using namespace std;

class Student
{

public:
	Student();
	static const int maxStudent = 10;
	double Average(); // average of test grades
	void setCourseName(string); // set the course name
	string getCourseName(); // get the course name

	void displayMessage(); // entry message to gradebook
	void outputGrades(); // prints all the grades
	void chart();
private:
	string nameOfCourse;

	 string names[maxStudent] = { "Javier", "Allan", "Alberto", "Dave", "Jessica", "Amy", "jasmine", "Charles", "Rick", "Silvia" };
};

