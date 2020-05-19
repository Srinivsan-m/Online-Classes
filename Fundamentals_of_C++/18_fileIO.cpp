#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //**File Out
    ofstream myFile1("file1.txt");
    myFile1 << "This file has been written using a programme.\n";
    myFile1.close();

    //**Appending lines
    ofstream myFile2("file2.txt", ios::app);
    if (!myFile2)
    {
        cout << "Sorry the file could not be opened!!.\n";
    }

    myFile2 << "Lines get appended." << endl;
    myFile2.close();

    // ** Reading from a file
    ifstream myFile3;
    myFile3.open("file3.txt");
    string data;
    while (myFile3)
    {
        getline(myFile3, data);
        cout << data << endl;
    }

    ofstream fileOut;
    string line;
    fileOut.open("fileIO.txt");
    while (fileOut)
    {
        getline(cin, line);
        if (line == "-1")
            break;
        fileOut << line << endl;
    }
    fileOut.close();

    cout << "\n\n Reading the file\n";
    ifstream fileIn("fileIO.txt");
    while (fileIn)
    {
        getline(fileIn, line);
        cout << line << endl;
    }
    fileIn.close();
}
