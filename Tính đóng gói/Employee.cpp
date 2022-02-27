#include<iostream>

using namespace std;

class Employee{
private:
    int id;
    string firstName;
    string lastName;
    int salary;
public:
    Employee(int id, string firstName, string lastName, int salary){
        this->id = id;
		this->firstName = firstName;
		this->lastName = lastName;
		this->salary = salary;
    }
    void setId(int id){
        this->id = id;
    }
    int getId(){
        return id;
    }
    void setFirstName(string firstName){
        this->firstName = firstName;
    }
    string getFirstName(){
        return firstName;
    }
    void setLastName(string lastName){
        this->lastName = lastName;
    }
    string getLastName(){
        return lastName;
    }
    void setSalary(int salary){
        this->salary = salary;
    }
    int getSalary(){
        return salary;
    }
    string getFullName(){
        return lastName + " " + firstName;
    }
};

int main() {
	Employee e(1, "Kien", "Hoang", 1000);
	cout << "Id: " << e.getId() << endl;
	cout << "Name: " << e.getFullName() << endl;
	cout << "Salary: " << e.getSalary() << endl;
	return 0;
}