#include <iostream>
#include <cstring>
using namespace std;

struct Emp
{
    int id = 001;
    int age = 20;
    // char name[30];
    string name = "default";
    double salary = 100000.0;
};

struct Point
{
    int x, y;
};

void printDetails(Emp e)
{
    cout << "\n\n** Employee Details **\n";
    cout << "Id : " << e.id << endl;
    cout << "Name : " << e.name << endl;
    cout << "Age : " << e.age << endl;
    cout << "Salary : " << e.salary << endl;
}

int main()
{
    Emp e1;
    e1.id = 101;
    e1.age = 26;
    // if using c_strings
    // strcpy(e1.name, "Tanmay Bhat");
    e1.name = "Tanmay Bhat";
    e1.salary = 120000.00;

    Emp e2 = {105, 34, "Zakir Khan", 1000000.00};

    printDetails(e1);
    printDetails(e2);

    Emp empAr[20];
    empAr[0].id = 101;
    empAr[0].name = "Tanmay Bhat";
    empAr[0].age = 28;
    empAr[0].salary = 120000.0;

    empAr[1] = {102, 30, "Zakir Khan", 200000.0};

    for (int i = 0; i < 4; i++)
    {
        printDetails(empAr[i]);
    }
    cout << "\n\n";
    struct Point p1 = {1, 2};

    // p2 is a pointer to structure p1
    struct Point *p2 = &p1;

    // Accessing structure members using
    // structure pointer
    cout << p1.x << " " << p1.y << endl;
    cout
        << p2->x << " " << p2->y;
    return 0;
}
