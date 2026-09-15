#include <iostream>
#include <queue>
#include <string>
using namespace std;

class PatientQueue
{
private:
    queue<string> patients;

public:

    // Add patient
    void addPatient(string name)
    {
        patients.push(name);
        cout << name << " queue mein add ho gaya.\n";
    }

    // Show first patient
    void showNextPatient()
    {
        if (patients.empty())
        {
            cout << "Queue empty hai.\n";
        }
        else
        {
            cout << "Next patient: "
                 << patients.front() << endl;
        }
    }

    // Show last patient
    void showLastPatient()
    {
        if (patients.empty())
        {
            cout << "Queue empty hai.\n";
        }
        else
        {
            cout << "Last patient: "
                 << patients.back() << endl;
        }
    }

    // Remove first patient
    void servePatient()
    {
        if (patients.empty())
        {
            cout << "Koi patient queue mein nahi hai.\n";
        }
        else
        {
            cout << "Serving: "
                 << patients.front() << endl;

            patients.pop();
        }
    }

    // Show total patients
    void totalPatients()
    {
        cout << "Total patients: "
             << patients.size() << endl;
    }

    // Check queue
    void checkQueue()
    {
        if (patients.empty())
            cout << "Queue empty hai.\n";
        else
            cout << "Queue mein patients mojood hain.\n";
    }
};

int main()
{
    PatientQueue q;

    // Patients enter the hospital
    q.addPatient("Ali");
    q.addPatient("Talha");
    q.addPatient("Ijaz");
    q.addPatient("Ahmed");

    cout << "\n------------------\n";

    q.showNextPatient();
    q.showLastPatient();
    q.totalPatients();

    cout << "\n------------------\n";

    // First patient is served
    q.servePatient();

    q.showNextPatient();
    q.totalPatients();

    cout << "\n------------------\n";

    // Second patient is served
    q.servePatient();

    q.showNextPatient();

    return 0;
}