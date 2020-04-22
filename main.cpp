#include <iostream>
#include <string>
#include "Person.h"
#include "Programmer.h"
#include "Client.h"
#include "Supervisor.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    int t;
    string name, surname, name_of_project;
    int year, number_of_employees;
    Programmer pr("ProgrammerName", "ProgrammerSurname", 18, "Lab3_1");
    Client cl("ClientName", "ClientSurname", 20, "Lab3_2");
    Supervisor sup("SupervisorName", "SupervisorSurname", 32, 2);

    cout << "�������� ����������� ��������: 1 - ������� ������ �� ���������, 2 - ������ �������\n";
    cin >> t;

    if (t == 1) {
        pr.print();
        cl.print();
        sup.print();
    }

    else {
        cout << "��������, ��� ���� ���������� ���� ������: 1 - �����������, 2 - ������, 3 - ������������ ������\n";
        cin >> t;
        cout << "������� ���, �������, ��� � �������������� �������� \n(��� ��������� � ������������ - �������� �������, ��� ������������ ������ - ���������� �����������):\n";
        if (t == 1) {
            cin >> name >> surname >> year >> name_of_project;
            pr.set_name(name);
            pr.set_surname(surname);
            pr.set_year(year);
            pr.set_name_of_project(name_of_project);
            pr.print();
        }
        if (t == 2) {
            cin >> name >> surname >> year >> name_of_project;
            cl.set_name(name);
            cl.set_surname(surname);
            cl.set_year(year);
            cl.set_name_of_project(name_of_project);
            cl.print();
        }
        if (t == 3) {
            cin >> name >> surname >> year >> number_of_employees;
            sup.set_name(name);
            sup.set_surname(surname);
            sup.set_year(year);
            sup.set_number_of_employees(number_of_employees);
            sup.print();
        }
    }
    return 0;
}
