#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Patient
{
private:
    string name;
    int age;
    int priority;

public:
    Patient(string n, int a, int p)
    {
        name = n;
        age = a;
        priority = p;
    }

    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Priority: " << priority << endl;
        cout << "------------------------" << endl;
    }

    int getPriority() const
    {
        return priority;
    }

    // Comparison operator for priority queue (higher numerical priority gets processed first)
    bool operator<(const Patient& other) const
    {
        return priority < other.priority;
    }
};

class Hospital
{
private:
    priority_queue<Patient> patients;

public:

    void addPatient(string name, int age, int priority)
    {
        Patient p(name, age, priority);
        patients.push(p);

        cout << name << " has been added to the hospital queue.\n";
    }

    void treatPatient()
    {
        if (patients.empty())
        {
            cout << "No patients currently in the queue.\n";
            return;
        }

        cout << "\nThe doctor will now treat the following patient:\n";
        patients.top().display();

        patients.pop();
    }

    void showNextPatient() const
    {
        if (patients.empty())
        {
            cout << "The queue is currently empty.\n";
            return;
        }

        cout << "\nNext patient in line:\n";
        patients.top().display();
    }
};

int main()
{
    Hospital hospital;

    hospital.addPatient("Ali", 25, 2);
    hospital.addPatient("Ahmed", 40, 5);
    hospital.addPatient("Usman", 30, 1);
    hospital.addPatient("Bilal", 50, 4);

    hospital.showNextPatient();

    hospital.treatPatient();
    hospital.treatPatient();
    hospital.treatPatient();
    hospital.treatPatient();

    return 0;
}
