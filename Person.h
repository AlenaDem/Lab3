#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    string surname;
    int year;
public:
    Person() : name("UnknownName"), surname("UnknownSurname"), year(0) {}
    virtual void print() = 0;
    Person& operator= (const string &a);
    Person& operator= (const int &n);
    Person(const Person &person);
    Person(string t_name, string t_surname, int t_year);
    virtual void set_name(string person_name);
    virtual string get_name();
    virtual void set_surname(string person_surname);
    virtual string get_surname();
    virtual void set_year(int person_year);
    virtual int get_year();
};

#endif // PERSON_H_INCLUDED
