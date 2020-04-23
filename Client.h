#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

class Client : public Person {
public:
    Client(string name, string surname, int year, string name_of_project);
    void print() const override;
    void set_name_of_project(string pr_cl_name_of_project);
    string get_name_of_project() const;

private:
    string name_of_project;
};

#endif // CLIENT_H_INCLUDED
