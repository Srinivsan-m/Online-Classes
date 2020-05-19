#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    //** Strings **//
    string day = "Tuesday";
    cout << day << endl;
    day = "Wednes\0day";
    cout << day << endl;

    cout << "\n\n";

    string name, age;
    cout << "Enter your full name : ";
    // ** cin does not take spaces
    // cin >> name;
    getline(cin, name);
    cout << "Enter your Age : ";
    cin >> age;
    cout << "\nHi " << name << "! Your age is " << age << endl;
    cout << "\n\n";

    //** getline takes the newline as input
    int num;
    string choco;
    cout << "Enter your fav number : ";
    cin >> num;
    // getchar() help get the newline character
    getchar();
    cout << "what is your fav chocolate : ";
    getline(cin, choco);
    cout << "You will get " << num << " " << choco << ".\n";

    cout << "\n\n";
    string s1 = "Hello";
    string s2 = "World";

    s1.push_back('1');
    s2.pop_back();
    s1.swap(s2);
    cout << " s1 :" << s1 << " s2: " << s2 << endl;
    string s3 = s1.append(s2);
    // concatination
    string s4 = s1 + s2;
    cout << " s1 :" << s1 << " s2: " << s2 << " s3 : " << s3 << endl;
    cout << "len : " << s1.length() << " " << s2.length() << " " << s3.size() << endl;

    // ** Character Arrays ** //
    // ** C_Strings ** //

    char fullname[30];
    // to get input with spaces, using scanf
    // getline() does not work with char array
    cout << "\n\nEnter your full Name : ";
    scanf("%[^\n]s", fullname);
    cout << fullname << "\n\n";

    // char ch1[] = "string 1";
    // char ch2[20];
    // strcpy(ch2, ch1);
    // cout << "ch1 : " << ch1 << "\nch2 : " << ch2 << endl;
    // ch2 = ch1;
    // cout << "s1 : " << s1 << "\ns2 : " << s2 << endl;

    char str1[] = "hello";
    char str2[] = "world !";
    cout << str1 << " " << str2 << endl;
    strcpy(str2, str1);
    strcat(str1, str2);
    cout << str1 << " " << str2 << endl;
    cout << "len : " << strlen(str1) << endl;
    cout << "cmp : " << strcmp(str1, str2) << endl;
    // Returns 0 if s1 and s2 are the same
    // less than 0 if s1<s2
    //  greater than 0 if s1>s2.
}