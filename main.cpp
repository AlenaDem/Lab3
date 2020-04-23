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
        cout << "\n������� �� ����� ����������� ����������? 1 - �����, 2 - �������, 3 - ����, 4 - �������������� ���������, 0 - ���\n";
        cin >> t;
        if (t == 1) {
            cout << "Programmer: " << pr.get_name();
            cout << "\nClient: " << cl.get_name();
            cout << "\nSupervisor: " << sup.get_name() << endl;
        }
        if (t == 2) {
            cout << "Programmer: " << pr.get_surname();
            cout << "\nClient: " << cl.get_surname();
            cout << "\nSupervisor: " << sup.get_surname();
        }
        if (t == 3) {
            cout << "Programmer: " << pr.get_year();
            cout << "\nClient: " << cl.get_year();
            cout << "\nSupervisor: " << sup.get_year();
        }
        if (t == 4) {
            cout << "Programmer: " << pr.get_name_of_project();
            cout << "\nClient: " << cl.get_name_of_project();
            cout << "\nSupervisor: " << sup.get_number_of_employees();
        }
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
            cout << "\n������� �� ����� ����������� ����������? 1 - ���, 2 - �������, 3 - ���, 4 - �������������� ��������, 0 - ���\n";
            cin >> t;
                switch (t) {
                case 1:
                    cout << pr.get_name() << endl;
                    break;
                case 2:
                    cout << pr.get_surname() << endl;
                    break;
                case 3:
                    cout << pr.get_year() << endl;
                    break;
                case 4:
                    cout << pr.get_name_of_project() << endl;
                    break;
                }
        }
        if (t == 2) {
            cin >> name >> surname >> year >> name_of_project;
            cl.set_name(name);
            cl.set_surname(surname);
            cl.set_year(year);
            cl.set_name_of_project(name_of_project);
            cl.print();
            cout << "\n������� �� ����� ����������� ����������? 1 - ���, 2 - �������, 3 - ���, 4 - �������������� ��������, 0 - ���\n";
            cin >> t;
                switch (t) {
                case 1:
                    cout << cl.get_name() << endl;
                    break;
                case 2:
                    cout << cl.get_surname() << endl;
                    break;
                case 3:
                    cout << cl.get_year() << endl;
                    break;
                case 4:
                    cout << cl.get_name_of_project() << endl;
                    break;
                }
        }
        if (t == 3) {
            cin >> name >> surname >> year >> number_of_employees;
            sup.set_name(name);
            sup.set_surname(surname);
            sup.set_year(year);
            sup.set_number_of_employees(number_of_employees);
            sup.print();
            cout << "\n������� �� ����� ����������� ����������? 1 - ���, 2 - �������, 3 - ���, 4 - �������������� ��������, 0 - ���\n";
            cin >> t;
                switch (t) {
                case 1:
                    cout << sup.get_name() << endl;
                    break;
                case 2:
                    cout << sup.get_surname() << endl;
                    break;
                case 3:
                    cout << sup.get_year() << endl;
                    break;
                case 4:
                    cout << sup.get_number_of_employees() << endl;
                    break;
                }
        }
    }
    return 0;
}
