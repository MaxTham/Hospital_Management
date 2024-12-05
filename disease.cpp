#include <iostream>
#include <string>

using namespace std;

class Disease
{
private:
    char diseaseName[25], virusName[25];

public:
    void getDiseaseDetail()
    {
        cout << "Enter disease name : ";
        cin >> diseaseName;

        cout << "Enter Virus name : ";
        cin >> virusName;
    }
    void showDiseaseDetail()
    {
        cout << endl;
        cout << "*** Disease : " << diseaseName << " ***" << endl;
        cout << "Virus name : " << virusName << endl;
    }
};

// For testing purposes
//  int main()
//  {
//      Disease d;
//      d.getDiseaseDetail();
//      d.showDiseaseDetail();

//     return 0;
// }