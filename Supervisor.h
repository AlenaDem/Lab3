#ifndef SUPERVISOR_H_INCLUDED
#define SUPERVISOR_H_INCLUDED

#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

class Supervisor : public Employee {
public:
    Supervisor(string name, string surname, int year, int number_of_employees);
    void print() const override;
    void set_number_of_employees(int sup_number_of_employees);
    int get_number_of_employees() const;
private:
    int number_of_employees;
};


#endif // SUPERVISOR_H_INCLUDED
