#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

class Employee : public Person {
    virtual void print() = 0;
public:
    Employee(string name, string surname, int year);
};

#endif // EMPLOYEE_H_INCLUDED
