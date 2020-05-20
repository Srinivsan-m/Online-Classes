#include <iostream>
using namespace std;

class DateClass
{
    //private by default even if not mentioned
private:
    int date, month, year;
    string day;

public:
    void setDate(int dd, int mm, int y, string d)
    {
        date = dd;
        month = mm;
        year = y;
        day = d;
    }
    void printDate()
    {
        cout << day << ", " << date << "/" << month << "/" << year << endl;
    }
};

// **Here by grouping members into public and private
// encapsulation property has been used
class IntArray
{
private:
    int array[10];

public:
    void setValue(int idx, int value)
    {
        if (idx < 0 || idx >= 10)
        {
            cout << "idx out of range";
            return;
        }
        array[idx] = value;
    }
};

class Something
{
private:
    int v1;
    int v2;
    int v3;
    // int m_value[3];
    // // an alternate way for implementation

public:
    void setValue(int value) { v1 = value; }
    int getValue() { return v1; }
    // void setValue1(int value) { m_value[0] = value; }
    // int getValue1() { return m_value[0]; }
    // // We have to update any member functions to reflect the new implementation
};

class Shape
{
    int length, width;

public:
    // default constructor
    Shape()
    {
        length = 0;
        width = 0;
        cout << "Default constructor was called\n";
    }

    // parametrized constructor
    Shape(int l, int w)
    {
        length = l;
        width = w;
    }
    // ** destructor
    // if some memory allocation is done
    // we have to specify it explicitly
    ~Shape()
    {
        cout << "\nDestructor was called\n";
    };

    // Setters
    void setLength(int len) { length = len; }
    void setWidth(int wid) { width = wid; }
    // Getters
    int getLength() { return length; }
    int getWidth() { return width; }

    double getArea();
};

// ** Declaring a member function outside the class
double Shape::getArea()
{
    return length * width;
};

int main()
{
    DateClass today;
    today.setDate(20, 05, 2020, "Wednesday");
    today.printDate();
    today.setDate(21, 05, 2020, "THursday");
    today.printDate();

    cout << "\n\n";

    IntArray ar;
    // keep the member variables private
    // to prevent any unexpected behaviour
    // eg. accessing array index out of range
    // ar.array[17] = 0;
    ar.setValue(3, 7);
    ar.setValue(14, 7);

    cout << "\n\n";

    // // even if we change the implementation
    // // the user-interface remains the same
    // ** Abstraction Property

    Something smth;
    smth.setValue(5);
    cout << smth.getValue() << "\n\n";

    Shape sh;
    Shape sh1 = {4, 8};
    Shape sh2;
    sh2.setLength(10);
    sh2.setWidth(6);
    cout << "len : " << sh.getLength() << "   wid : " << sh.getWidth();
    cout << "\nlen : " << sh1.getLength() << "   wid : " << sh1.getWidth();
    cout << "\nlen : " << sh2.getLength() << "   wid : " << sh2.getWidth();
    cout << "\nArea is : " << sh2.getArea() << "sq. units\n";
}