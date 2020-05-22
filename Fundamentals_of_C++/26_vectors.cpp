#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;

    // push_back() – It push the elements into a vector from the back
    for (int i = 0; i < 7; i++)
        v1.push_back(i);

    for (int i = 0; i < 7; i++)
        cout << v1[i] << " ";

    cout << "\n\n";

    // The auto keyword specifies that the type of the variable that is begin declared will automatically be deduced from its initializer
    // and for functions if their return type is auto then that will be evaluated by return type expression at runtime.

    // begin() – Returns an iterator pointing to the first element in the vector
    // end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    for (auto i = v1.begin(); i != v1.end(); i++)
        cout << *i << " ";

    cout << "\n\n";
    // size() – Returns the number of elements in the vector.
    cout << "size : " << v1.size();

    // clear() – It is used to remove all the elements of the vector container
    v1.clear();
    cout << "\nv1.clear()\n";
    // empty() – Returns true whether the container is empty.
    if (v1.empty() == true)
    {
        cout << "\nvector is empty";
    }
    else
    {
        cout << "\n vector is NOT empty\n";
    }

    // assign() – It assigns new value to the vector elements by replacing old ones
    // fill the array with 10 five times
    v1.assign(5, 10);
    cout << "\n\n";

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}