#include "person.cpp"
#include "disease.cpp"
#include <iostream>
#include <cstring>

using namespace std;

class patient : public Person
{
private:
    int patientId;
    Disease disease;
    string appointDate;
    char patientFile[20] = "patientData.dat";
    char patientTempFile[20] = "patientdata2.dat";

public:
    void getPatientInformation()
    {
        cout << "Enter person's data" << endl;
        getPersonData();

        cout << "Disease details" << endl;
        disease.getDiseaseDetail();

        cout << "Appoint date" << endl;
        cin >> appointDate;
    }

    void addPatient()
    {
        cout << "Patient ID : ";
        cin >> patientId;

        getPatientInformation();
        ofstream patientDatabase(patientFile, ios::binary | ios::out | ios::app);

        patientDatabase.write((char *)this, sizeof(patient));
    }

    void showPatientDetails()
    {
        cout << "---Patient Data---" << endl;
        cout << "Patient Id : " << patientId << endl;
        showPersonData();
        disease.showDiseaseList();
        cout << "Appointment date : " << appointDate << endl;
    }

    void showPatientDataFromFile()
    {
        ifstream readdatafromdatabase(patientFile, ios::binary | ios::in);

        while (!readdatafromdatabase.read((char *)this, sizeof(patient)))
            if (readdatafromdatabase.read((char *)this, sizeof(patient)))
                showPatientData();
    }

    void dischargePatient()
    {
        int n, flag = 0;

        cout << "\nEnter the ID of the patient you want to delete" << endl;
        cin >> n;

        ifstream ifpatient;
        ifpatient.open(patientFile, ios::in | ios::binary)

        ofstream ofpatient;
        ofpatient.open(patientTempFile,ios::out|ios::binary);

        while(!ifpatient.eof()){
            ifpatient.read((char*)this,sizeof(patient));
            if(ifpatient){
                if(n==patientId){
                    flag = 1;
                }e;se{
                    ofpatient.write((char*)this,sizeof(patient));
                }
            }
        }

        ifpatient.close();
        ofpatient.close();
        remove(patientFile);
        rename(patientTempFile,patientFile);

        if(flag==1){
            cout<<"\nRecord successfully deleted \n";
        }else{
            cout<<"\nRecord not found\n";
        }
    }
}