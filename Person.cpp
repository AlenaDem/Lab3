#include "Person.h"

Person& Person::operator=(const string &a) {
    name = a.substr(0, a.find(' '));
    surname = a.substr(a.find(' ')+1, a.length());
    return *this;
}

Person& Person::operator= (const int &n) {
    year = n;
    return *this;
}

Person::Person(const Person &person) {
    name = person.name;
    surname = person.surname;
    year = person.year;
}

Person::Person(string t_name, string t_surname, int t_year) {
    name = t_name;
    surname = t_surname;
    year = t_year;
}

void Person::set_name(string person_name) {
    name = person_name;
}

string Person::get_name() {
    return name;
}

void Person::set_surname(string person_surname) {
    surname = person_surname;
}

string Person::get_surname() {
    return surname;
}

void Person::set_year(int person_year) {
    year = person_year;
}

int Person::get_year() {
    return year;
}
