#include "Client.h"

Client::Client(string name, string surname, int year, string name_of_project)
    : Person {name, surname, year},
    name_of_project {name_of_project}
{
}

void Client::print() {
    cout << "Client(" << name << ", " << surname << ", " << year << ", " << name_of_project << ")\n";
}

void Client::set_name_of_project(string pr_cl_name_of_project) {
        name_of_project = pr_cl_name_of_project;
    }
