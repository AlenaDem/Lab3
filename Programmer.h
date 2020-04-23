#ifndef PROGRAMMER_H_INCLUDED
#define PROGRAMMER_H_INCLUDED

#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

class Programmer : public Employee {
public:
    Programmer(string name, string surname, int year, string name_of_project);
    void print() const override;
    void set_name_of_project(string pr_cl_name_of_project);
    string get_name_of_project() const;
private:
    string name_of_project;
};

#endif // PROGRAMMER_H_INCLUDED
