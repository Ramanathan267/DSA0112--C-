#include <iostream>
using namespace std;

class Car {
public:
    int id, marks;
    string name;
    static int count;  
    
    Car(int carId, string carName, int carMarks) {
        id = carId;
        name = carName;
        marks = carMarks;
        count++; 
    }

    void display() {
        cout << "Id: " << id << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int Car::count = 0;

int main() {
    int id, marks;
    string name;
    
    cout << "Enter the Id of the Car: ";
    cin >> id;
    cout << "Enter the name of the Car: ";
    cin >> name;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;
    Car car1(id, name, marks);  
    
    cout << "\nEnter the Id of the Car: ";
    cin >> id;
    cout << "Enter the name of the Car: ";
    cin >> name;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;
    Car car2(id, name, marks); 
    cout << "\n";
    car1.display();
    car2.display();

    cout << "\nNo. of objects created: " << Car::count << endl;

    return 0;
}

