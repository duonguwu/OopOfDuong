#include "Person.cpp"
using namespace std;

class Teacher5 : public Person {
private: int salary;
public: 
    Teacher5(string name,int age, string address, int salary) : Person(name,age,address){
        this->salary = salary;
    }
    int getSalary() {
		return salary;
	}

	void setSalary(int salary) {
		this->salary = salary;
	}
	void display() {
		Person::display();
		cout << "Salary: " << salary << endl;
	}
};