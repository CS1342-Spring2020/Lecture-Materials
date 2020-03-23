/***
 * This program walks through the rule of three 
 * and how they are used with the Employee class
 * 
 **/

#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    Employee(); // Default Constructor
    Employee(const Employee &); // Copy Constructor
    Employee& operator=(const Employee &); // Copy Assignment Operator
    ~Employee(); // Destructor

    int getId() { return *id; }
    void setId(int newId) { *this->id = newId; }
private:
    int *id;
    string name;
};

Employee::Employee(): name{""}, id{ new int(0) } {
    std::cout << "Default Constructor called" << std::endl;
}

Employee::~Employee() {
    std::cout << "Destructor called" << std::endl;
    delete id;
}

Employee::Employee(const Employee & copy) {
    std::cout << "Copy Constructor called" << std::endl;
    id = new int(*copy.id);
    name = copy.name;
}

Employee& Employee::operator=(const Employee & copy) {
    std::cout << "Copy Assignment Operator called" << std::endl;
    if (this != &copy) {
        delete id;
        id = new int;
        *id = *copy.id;
        name = copy.name;
    }

    return *this;
}

void print(Employee employee) {
    std::cout << "e1 has an id of " << employee.getId() << std::endl;
}

int main() {
    Employee e1; // Calls Default Constructor
    e1.setId(1); // Calls setter

    print(e1); // Passing by Reference -> calls the Copy Constructor

    Employee e2 = Employee(e1); // Also calls the copy constructor
    Employee e3; // Default Constructor
    e3 = e2; // Copy Assignment Operator

    // Destructor for all 3 objects called after program ends

    return 0;
}