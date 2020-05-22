#include <iostream>
using namespace std;

// **method overloading
class Addition
{
public:
    void sum(int a, int b)
    {
        cout << a + b;
    }
    void sum(int a, int b, int c)
    {
        cout << a + b + c;
    }
    void sum(double a, double b)
    {
        cout << a + b;
    }
};

// ** operator oveloading
class Complex
{
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    void print()
    {
        cout << real << " +i" << img << endl;
    }
};

class Box
{
    double length;
    double breadth;
    double height;

public:
    Box(double l = 0, double b = 0, double h = 0)
    {
        length = l;
        breadth = b;
        height = h;
    }
    double getVolume()
    {
        return length * breadth * height;
    }
    // Overload + operator to add two Box objects.
    Box operator+(const Box &b)
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = height + b.height;
        return box;
    }
};

// ** Method Overriding
class Emp
{
public:
    void whoAmI()
    {
        cout << "I am an employee.\n";
    }
};

class Boss : public Emp
{
public:
    void whoAmI()
    {
        cout << "I am the Boss.\n";
    }
};

// ** Virtual Functions

class Base
{
public:
    // // Without : Early Binding Ocuurs
    // // Output : Base class

    // // With Virtual keyword : Late Binding Ocuurs
    // // Output : Derived Class
    // // We get the expected output

    // void show()
    virtual void show()
    {
        cout << "Base class";
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived Class";
    }
};

int main()
{
    // **method overloading
    Addition add;
    add.sum(4, 6);
    cout << '\n';
    add.sum(3, 7, -1);
    cout << '\n';
    add.sum(3.5, 9.8);

    cout << "\n\n";

    // ** operator oveloading
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c1.print();
    c2.print();
    c3.print();

    cout << "\n";

    Box b1(2, 2, 3);
    Box b2(2, 3, 1);
    Box b3;

    cout << "Vol b1 : " << b1.getVolume() << endl;
    cout << "Vol b2 : " << b2.getVolume() << endl;
    b3 = b1 + b2;
    cout << "Vol b3 : " << b3.getVolume() << endl;

    cout << "\n\n";

    // ** Method Overriding
    Emp emp1;
    Boss boss1;
    emp1.whoAmI();
    boss1.whoAmI();

    cout << "\n\n";
    // ** Virtual Functions
    Base *b;   //Base class pointer
    Derived d; //Derived class object
    b = &d;
    b->show();
}
