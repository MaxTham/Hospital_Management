#include <string>
#include <iostream>
#include <time.h>

using namespace std;

class Available
{
private:
    char DayOfWeek[15][7], shift1[25], shift2[25];
    int i, NoD;

public:
    void whenAvailable()
    {
        cout << "Enter no. of available days 1-7 : " << endl;
        cin >> NoD;

        while ((NoD >= 1) && (NoD > 7))
        {
            cout << "Error, the number you entered is out of the date range." << endl;
            cout << "Enter the number between 1-7 : " << endl;
            cin >> NoD;
        }
        cout << "Enter " << NoD << " days of week for Dr. Available? : " << endl;

        for (i = 0; i < NoD; i++)
        {
            cin >> DayOfWeek[i];
        }
        cout << "Enter Dr. First shift : " << endl;
        cin >> shift1;

        cout << "Enter Dr. Second shift : " << endl;
        cin >> shift2;
    }
    void displayAvailable()
    {
        time_t rawtime;
        struct tm *timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        cout << "Local time : " << endl;
        cout << asctime(timeinfo);

        cout << "Dr . is available for" << NoD << " days in week" << endl;
        cout << "**Available days are**" << endl;

        for (i = 0; i < NoD; i++)
        {
            cout << DayOfWeek[i] << endl;
        }
        cout << "**Dr . Shift are**" << endl;
        cout << shift1 << endl;
        cout << shift2 << endl;
    }
};

// for testing purposes
// int main()
// {
//     Available Dr;
//     Dr.whenAvailable();
//     Dr.displayAvailable();
//     return 0;
// }