#include "Supervisor.h"

Supervisor::Supervisor(string name, string surname, int year, int number_of_employees)
    : Employee {name, surname, year},
    number_of_employees {number_of_employees}
{
}

void Supervisor::print() const {
    cout << "Supervisor(" << name << ", " << surname << ", " << year << ", " << number_of_employees << ")\n";
}

void Supervisor::set_number_of_employees(int sup_number_of_employees) {
        number_of_employees = sup_number_of_employees;
    }

int Supervisor::get_number_of_employees() const {
    return number_of_employees;
}
