
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Restaurant
{
private:
    stack<string> plates;

public:

    // Plate add karna
    void addPlate(string plate)
    {
        plates.push(plate);
        cout << plate << " All Plattes are Placed in the Stack Succesfully.\n";
    }

    // Top plate uthana
    void removePlate()
    {
        if (plates.empty())
        {
            cout << "There is a no Plattes.\n";
            return;
        }

        cout << plates.top() << " plate is Picked .\n";
        plates.pop();
    }

    // Top plate dekhna
    void showTopPlate()
    {
        if (plates.empty())
        {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Top plate: "
             << plates.top() << endl;
    }

    // Total plates
    void totalPlates()
    {
        cout << "Total plates: "
             << plates.size() << endl;
    }
};

int main()
{
    Restaurant restaurant;

    restaurant.addPlate("Plate 1");
    restaurant.addPlate("Plate 2");
    restaurant.addPlate("Plate 3");

    cout << "\n";

    restaurant.showTopPlate();

    cout << "\n";

    restaurant.removePlate();
    restaurant.removePlate();

    cout << "\n";

    restaurant.showTopPlate();

    restaurant.totalPlates();

    return 0;
}
