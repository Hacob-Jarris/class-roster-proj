#include <iostream>
#include <string>
#include "student.h"

using namespace std;


//default constructor
Student::Student() {
    this->studentID ="";
    this->firstName = "";
    this->lastName = "";
    this->email = "";
    this->age = "";
    for(int i = 0; i < 3; i++) {
        this->daysArray[i] = 0;
    }
    this->degree = SOFTWARE;
}

//D.2.a
//getters for instance variables from D.1
string Student::getID() { return this -> studentID; }
string Student::getFirstName() { return this -> firstName; }
string Student::getLastName() { return this -> lastName; }
string Student::getEmail() { return this -> email; }
string Student::getAge() { return this -> age; }
int Student::getDays() { return this -> daysArray[]; }
DegreeProgram Student::getDegree() { return this -> degree; }

//D.2.b
//setters for instance variables from D.1
void Student::setID(std::string studentID) { this->studentID = studentID; }
void Student::setFirstName(std::string firstName) { this->firstName = firstName; }
void Student::setLastName(std::string lastName) { this->lastName = lastName; }
void Student::setEmail(std::string email) { this->email = email; }
void Student::setAge(std::string age) { this->age = age; }
void Student::setDays(int days1, int days2, int days3) {
    this->daysArray[0] = days1; 
    this->daysArray[1] = days2; 
    this->daysArray[2] = days3;
}
void Student::setDegree(DegreeProgram degree) { this->degree = degree; }
