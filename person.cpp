#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    int age;
    char name[25], address[25], email[25], phoneNo[25];

public:
    void getPersonData()
    {
        cout << "Enter name : ";
        cin >> name;

        cout << "Enter age : ";
        cin >> age;

        cout << "Enter phone number : ";
        cin >> phoneNo;

        cout << "Enter address : ";
        cin >> address;

        cout << "Enter email : ";
        cin >> email;
    }

    void showPersonData()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Phone number : " << phoneNo << endl;
        cout << "Address : " << address << endl;
        cout << "Email : " << email << endl;
    }
};

// For testing purposes
//  int main(){
//      Person p1;

//     p1.getPersonData();
//     p1.showPersonData();

//     return 0;
// }