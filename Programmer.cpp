#include "Programmer.h"

Programmer::Programmer(string name, string surname, int year, string name_of_project)
    : Employee {name, surname, year},
    name_of_project {name_of_project}
{
}

void Programmer::print() {
    cout << "Programmer(" << name << ", " << surname << ", " << year << ", " << name_of_project << ")\n";
}

void Programmer::set_name_of_project(string pr_cl_name_of_project) {
        name_of_project = pr_cl_name_of_project;
    }
string Programmer::get_name_of_project() {
    return name_of_project;
}
