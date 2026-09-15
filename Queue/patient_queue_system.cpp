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
        cout << name << " is added in the queue .\n";
    }

    // Show first patient
    void showNextPatient()
    {
        if (patients.empty())
        {
            cout << "Queue is empty.\n";
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
            cout << "Queue is empty.\n";
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
            cout << "No one Patient is waiting.\n";
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
            cout << "Queue is empty.\n";
        else
            cout << "Few Patients are waiting.\n";
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
