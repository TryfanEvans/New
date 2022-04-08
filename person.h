#include <iostream>
#include "person.cpp"
using namespace std;

class person
{
    person(string myName, int Salary); // a name and salary must be provided to create a person
    void setName(string myName);       // change the person's name
    string getName();
    void setSalary(int mySalary); // change the person's salary
    int getSalary();
}